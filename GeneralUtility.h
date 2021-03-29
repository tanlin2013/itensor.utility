#ifndef __GENERALUTILITY_H_CMC__
#define __GENERALUTILITY_H_CMC__

// Use iprint
#ifndef iprint
#define iprint(name) myprinter(#name, (name))
#endif
template <typename TType>
inline void myprinter (string name, const TType& value)
{
    cout << name << endl;
    cout << value << endl;
}

#define mycheck(condition, message) mycheck_impl(condition, __func__, message)
template <typename TypeName>
inline void mycheck_impl (const TypeName& condition, const string& func_name, string message="")
{
    if (!bool(condition))
    {
        cout << func_name << ": " << message << endl;
        throw;
    }
}

#endif

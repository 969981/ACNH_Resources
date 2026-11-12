
char * FUN_0069bd9c(byte *param_1,char *param_2,ulong param_3)

{
  nn::util::SNPrintf(param_2,param_3,
                     "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
                     ,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],(ulong)param_1[3],
                     (ulong)param_1[4],(uint)param_1[5],(uint)param_1[6],(uint)param_1[7],
                     (uint)param_1[8],(uint)param_1[9],(uint)param_1[10],(uint)param_1[0xb],
                     (uint)param_1[0xc],(uint)param_1[0xd],(uint)param_1[0xe],(uint)param_1[0xf],
                     (uint)param_1[0x10],(uint)param_1[0x11],(uint)param_1[0x12],(uint)param_1[0x13]
                    );
  return param_2;
}


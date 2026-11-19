
undefined8
FUN_039fa960(long *param_1,int param_2,undefined8 param_3,int param_4,long param_5,
            undefined8 param_6,float *param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  
  if (param_4 < (int)(uint)*(byte *)((long)param_1 + 0x25b)) {
    pfVar3 = *(float **)(param_1[1] + 0x38);
    local_68 = 0;
    local_60 = 0.0;
    local_5c = 0.0;
    if (pfVar3 == (float *)(param_1[1] + 0x28)) {
      (**(code **)(*param_1 + 0x48))(param_1,&local_68);
      fVar6 = (float)local_68;
      fVar7 = local_68._4_4_;
    }
    else {
      local_68 = *(undefined8 *)pfVar3;
      local_60 = pfVar3[2];
      local_5c = pfVar3[3];
      fVar6 = *pfVar3;
      fVar7 = pfVar3[1];
    }
    *param_7 = *(float *)(param_5 + 0x2c) +
               fVar7 * *(float *)(param_5 + 0x24) + fVar6 * *(float *)(param_5 + 0x20) +
               local_60 * *(float *)(param_5 + 0x28);
    uVar2 = FUN_039f94dc(param_5,&local_68);
    *param_7 = local_5c + *param_7;
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1[0x49];
      if (lVar4 != 0) {
        if ((*(byte *)((long)param_1 + 0x25a) & 1) == 0) {
          iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_4);
          lVar4 = param_1[0x49];
          if (iVar1 < 2) {
            *(undefined1 *)(lVar4 + 0x10) = 0xff;
            goto LAB_039fab18;
          }
        }
        puVar5 = *(undefined4 **)(lVar4 + (long)param_2 * 0x18);
        local_58 = 0;
        local_68 = 0xffffffff00000000;
        local_60 = 0.0;
        local_5c = 0.0;
        uVar2 = FUN_003af7b0(*(long *)(param_1[1] + 0x118) +
                             (ulong)*(ushort *)((long)param_1 + 0x14) * 0x70,&local_68,param_6,
                             param_4);
        while ((uVar2 & 1) != 0) {
          *(short *)puVar5 = SUB42(local_60,0);
          *(short *)(puVar5 + 1) = (short)param_4;
          *(short *)((long)puVar5 + 2) = SUB42(local_5c,0);
          puVar5 = (undefined4 *)((long)puVar5 + 6);
          uVar2 = FUN_003af7b0(*(long *)(param_1[1] + 0x118) +
                               (ulong)*(ushort *)((long)param_1 + 0x14) * 0x70,&local_68,param_6,
                               param_4);
        }
        *(undefined2 *)(puVar5 + 1) = 0;
        *puVar5 = 0;
        *(char *)(param_1[0x49] + (long)param_2 * 0x18 + 0x10) = (char)param_4;
        if (*(short *)(*(long *)(param_1[0x49] + (long)param_2 * 0x18) + 2) == 0) {
          return 0;
        }
      }
LAB_039fab18:
      if ((*(byte *)((long)param_1 + 0x25a) >> 2 & 1) == 0) {
        return 1;
      }
      FUN_03a7b790(param_8,param_1[0x4a],param_2,param_4,1);
      return 1;
    }
  }
  return 0;
}


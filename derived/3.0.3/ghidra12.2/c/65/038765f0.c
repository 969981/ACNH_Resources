
void FUN_038765f0(undefined8 param_1,long param_2,short *param_3,uint param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_24;
  
  if ((param_3 != (short *)0x0) && (uVar5 = *(uint *)(param_2 + 0x10), param_4 <= uVar5)) {
    if (param_5 == 1) {
      uVar1 = FUN_00227e00(param_3,param_4);
      uVar5 = *(uint *)(param_2 + 0x10);
      if (uVar1 <= uVar5 >> 2) goto LAB_038766a4;
    }
    else if ((param_5 == 2) && (param_4 <= (uVar5 >> 1 & 0x7ffffffe))) {
LAB_038766a4:
      if (uVar5 != 0) {
        memset((void *)(param_2 + 0x1c),0,(ulong)uVar5);
      }
      if (param_5 == 1) {
        uVar2 = 0;
        if (uVar5 != 0) {
          cVar3 = (char)*param_3;
          uVar1 = 0;
          if (cVar3 == '\0') goto LAB_03876754;
          uVar2 = 0;
          do {
            *(char *)(param_2 + 0x1c + uVar2) = cVar3;
            cVar3 = *(char *)((long)param_3 + uVar2 + 1);
            uVar2 = uVar2 + 1;
          } while (cVar3 != '\0' && uVar2 < uVar5);
        }
        uVar1 = (uint)uVar2;
      }
      else {
        uVar2 = 0;
        uVar5 = uVar5 >> 1 & 0x7ffffffe;
        if ((uVar5 != 0) && (sVar4 = *param_3, sVar4 != 0)) {
          uVar2 = 0;
          do {
            *(short *)(param_2 + 0x1c + uVar2) = sVar4;
            sVar4 = *(short *)((long)param_3 + uVar2 + 2);
            uVar2 = uVar2 + 2;
          } while (sVar4 != 0 && uVar2 < uVar5);
        }
        *(undefined1 *)(param_2 + (uVar2 & 0xffffffff) + 0x1c) = 0;
        uVar1 = (uint)uVar2;
        uVar2 = (ulong)(uVar1 | 1);
      }
LAB_03876754:
      *(uint *)(param_2 + 0x14) = uVar1;
      *(int *)(param_2 + 0x18) = param_5;
      local_50 = 0;
      *(undefined1 *)(param_2 + (uVar2 & 0xffffffff) + 0x1c) = 0;
      goto LAB_03876654;
    }
  }
  local_50 = 0x10c07;
LAB_03876654:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_50);
  return;
}


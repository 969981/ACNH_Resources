
void FUN_030c47d8(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined *local_30;
  undefined4 local_28;
  
  FUN_030c48d8();
  if ((*(char *)(param_1 + 0x218) == '\0') && (iVar2 = *(int *)(param_1 + 0x21c), -1 < iVar2)) {
    if (iVar2 == 8) {
      if ((*(long *)(param_1 + 0x220) == 0) ||
         (plVar1 = *(long **)(*(long *)(param_1 + 0x220) + 0x1b0), plVar1 == (long *)0x0)) {
        iVar2 = 8;
      }
      else {
        (**(code **)(*plVar1 + 0x30))(plVar1,0);
        iVar2 = *(int *)(param_1 + 0x21c);
      }
    }
    *(int *)(param_1 + 0x21c) = iVar2 + -1;
    plVar1 = *(long **)(param_1 + 0x210);
    if ((plVar1 != (long *)0x0) && (plVar1[1] != 0)) {
      local_30 = PTR_DAT_04bc0cb8 + 0x10;
      fVar4 = (float)iVar2 * -31.875 + 255.0;
      uVar3 = 0;
      if (fVar4 != (float)(int)fVar4) {
        uVar3 = (uint)(fVar4 < 0.0);
      }
      local_28 = 0x14;
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30);
      (**(code **)(plVar1[3] + 0x158))(plVar1[1],(int)fVar4 - uVar3);
    }
  }
  return;
}



void FUN_008d42c4(long *param_1,byte *param_2,byte param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if ((param_4 & 1) != 0) {
    pcStack_38 = "Chara_Attention_On";
    if ((param_3 & 1) == 0) {
      pcStack_38 = "Chara_Attention_Off";
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    FUN_03844960(*param_1 + 0x37fc8,&local_40,0);
  }
  *(byte *)((long)param_1 + 0x25) = param_3 & 1;
  puVar4 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_2 < 8) {
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      puVar4 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)*param_2 * 4 + 0xde8);
    }
  }
  uVar1 = *puVar4;
  if ((((*(long *)PTR_DAT_04bb27c0 != 0 && uVar1 != 0) &&
       (plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0)) &&
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar6 + 0x46) == uVar1)) {
    lVar5 = plVar6[0x2a];
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3758);
    if (((uVar3 & 1) != 0) && ((int)lVar5 == 1)) {
      if ((param_3 & 1) == 0) {
        uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar5 = 0x48;
      }
      else {
        uVar3 = (**(code **)(*plVar6 + 0x230))(plVar6);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar5 = 0x47;
      }
      (**(code **)(*plVar6 + lVar5 * 8))(plVar6);
    }
  }
  return;
}


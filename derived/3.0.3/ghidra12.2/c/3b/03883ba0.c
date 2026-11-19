
void FUN_03883ba0(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (0 < *(int *)(*(long *)(DAT_05ae6a60 + 8) + 0x60)) {
    uVar2 = (**(code **)(*param_1 + 0xa0))();
    if ((uVar2 & 1) != 0) {
      if ((((*param_2 != param_1[2]) || ((char)param_2[1] != (char)param_1[3])) || (param_3 != 2))
         || (*(char *)((long)param_2 + 9) != *(char *)((long)param_1 + 0x19))) {
                    /* WARNING: Could not recover jumptable at 0x03883cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x260))(param_1,param_2,param_3);
        return;
      }
      (**(code **)(*param_1 + 0x260))(param_1,param_2,2);
      lVar3 = *(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0xf8);
      iVar1 = *(int *)(lVar3 + 0x48);
      if (iVar1 != 0) {
        lVar5 = (long)iVar1 << 3;
        plVar4 = *(long **)(lVar3 + 0x50);
        do {
          (**(code **)(*param_1 + 0x260))(param_1,*plVar4 + 0x10,*(undefined4 *)(*plVar4 + 8));
          lVar5 = lVar5 + -8;
          plVar4 = plVar4 + 1;
        } while (lVar5 != 0);
      }
    }
  }
  return;
}


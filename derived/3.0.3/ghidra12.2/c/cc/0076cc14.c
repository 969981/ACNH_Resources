
ulong FUN_0076cc14(long param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 0x58);
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if ((uVar3 & 1) != 0) {
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    puVar1 = PTR_DAT_04bb43c0;
    if ((uVar3 & 1) != 0) {
      if (((char)param_2[8] != '\0') && (*param_2 == -2)) {
LAB_0076cc78:
                    /* WARNING: Could not recover jumptable at 0x0076cc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)*plVar4)(plVar4,param_2);
        return uVar3;
      }
      lVar5 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(param_2);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_0076cc78;
      }
    }
    uVar2 = *(uint *)(param_1 + 8);
  }
  return (ulong)uVar2;
}


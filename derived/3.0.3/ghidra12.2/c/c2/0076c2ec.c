
void FUN_0076c2ec(long param_1)

{
  long lVar1;
  short *psVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1 + 0x14;
  lVar1 = lVar7 + ((ulong)~*(uint *)(param_1 + 0x10) & 1) * 0x20;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  FUN_0076c480(lVar1,param_1 + 0xc,1,1,1);
  FUN_0076b868(lVar7 + ((ulong)*(uint *)(param_1 + 0x10) & 1) * 0x20,param_1 + 0xc,0,
               *(undefined1 *)(param_1 + 0xca));
  uVar4 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar4;
  plVar6 = (long *)(param_1 + 0x78);
  uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar5 & 1) != 0) {
    psVar2 = (short *)(lVar7 + (ulong)(uVar4 & 1) * 0x20);
    if ((char)psVar2[8] != '\0' && *psVar2 == -2) {
LAB_0076c3d8:
                    /* WARNING: Could not recover jumptable at 0x0076c3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*plVar6)(plVar6,psVar2);
      return;
    }
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(psVar2);
    if (*(long *)puVar3 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_0076c3d8;
    }
  }
  return;
}


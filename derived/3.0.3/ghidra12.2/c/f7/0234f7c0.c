
void FUN_0234f7c0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  undefined4 *puVar9;
  long local_60;
  char local_58;
  char local_57;
  char local_56;
  
  lVar2 = param_1 + 0x14;
  lVar3 = param_1 + 0xc;
  lVar5 = lVar2 + ((ulong)~*(uint *)(param_1 + 0x10) & 1) * 0x14;
  *(undefined4 *)(lVar5 + 0xc) = 0;
  FUN_0234eb20(lVar5,lVar3,1,1);
  puVar9 = (undefined4 *)(lVar2 + (ulong)(*(uint *)(param_1 + 0x10) & 1) * 0x14);
  piVar8 = puVar9 + 2;
  if (*piVar8 != 0) {
    cVar4 = *(char *)(param_1 + 0x9a);
    FUN_0071c8d0(&local_60,piVar8,lVar3,0);
    if (local_60 != 0) {
      if ((local_57 == '\0') || ((cVar4 != '\0' && ((local_58 == '\0' || (local_56 == '\0'))))))
      goto LAB_0234f88c;
      FUN_006fb3d0();
    }
    FUN_0234eb20(puVar9,lVar3,0,1);
  }
  *puVar9 = 0;
  *(undefined1 *)(puVar9 + 1) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined2 *)(puVar9 + 4) = 0;
LAB_0234f88c:
  plVar7 = (long *)(param_1 + 0x60);
  uVar1 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
  if (((uVar6 & 1) == 0) || (0x2f < *(uint *)(lVar2 + (ulong)(uVar1 & 1) * 0x14))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0234f8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar7)(plVar7);
  return;
}



void FUN_017aea94(long param_1)

{
  long lVar1;
  undefined2 uVar2;
  undefined *puVar3;
  ulong uVar4;
  short *psVar5;
  long lVar6;
  long *plVar7;
  undefined2 *puVar8;
  int *piVar9;
  uint uVar10;
  long local_60;
  char local_57;
  
  lVar1 = param_1 + 0x14;
  lVar6 = param_1 + 0xc;
  FUN_017ac9b0(lVar1 + ((ulong)~*(uint *)(param_1 + 0x10) & 1) * 0x1c,lVar6,1,1,0);
  puVar3 = PTR_DAT_04bb3170;
  uVar10 = *(uint *)(param_1 + 0x10) & 1;
  puVar8 = (undefined2 *)(lVar1 + (ulong)uVar10 * 0x1c);
  piVar9 = (int *)(puVar8 + 8);
  if (*piVar9 != 0) {
    FUN_0071c8d0(&local_60,piVar9,lVar6,0);
    if (local_60 != 0) {
      if (local_57 == '\0') goto LAB_017aeb78;
      FUN_006fb3d0();
    }
    FUN_017ac9b0(puVar8,lVar6,0,1,1);
  }
  *piVar9 = 0;
  lVar6 = lVar1 + (ulong)uVar10 * 0x1c;
  *(undefined1 *)(puVar8 + 1) = 0;
  *puVar8 = 0xffff;
  *(undefined4 *)(lVar6 + 0x14) = 0;
  uVar2 = *(undefined2 *)puVar3;
  *(undefined1 *)(puVar8 + 3) = 0;
  *(undefined2 *)(lVar6 + 0x18) = 0;
  puVar8[2] = uVar2;
  *(undefined8 *)(puVar8 + 4) = 0xffffffff;
LAB_017aeb78:
  plVar7 = (long *)(param_1 + 0x70);
  uVar10 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar10;
  uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
  if (((uVar4 & 1) == 0) ||
     (((psVar5 = (short *)(lVar1 + (ulong)(uVar10 & 1) * 0x1c), *psVar5 == -1 &&
       (psVar5[2] == *(short *)puVar3)) && (*(int *)(psVar5 + 4) == -1)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017aebd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar7)(plVar7);
  return;
}



void FUN_0019afcc(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 local_28;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  puVar2 = PTR_DAT_04bcc110;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_0019d6e8(param_1 + 6,3);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_00186460(param_1 + 0xf,0x20000000,1);
  *PTR_DAT_04bcc0a0 = 0;
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_28);
  }
  else {
    FUN_0018c9b0(&local_28,0);
  }
  *(undefined8 *)PTR_DAT_04bcbcb0 = local_28;
  puVar3 = PTR_DAT_04bcc100;
  puVar2 = PTR_DAT_04bcbd30;
  if (*(int *)PTR_DAT_04bcbb58 - 1U < 6) {
    uVar11 = (ulong)(*(int *)PTR_DAT_04bcbb58 - 1U) << 3;
    uVar12 = 0x10100000000 >> (uVar11 & 0x38);
    *PTR_DAT_04bcc100 = (char)uVar12;
    *PTR_DAT_04bcc108 = (char)(0x10000000101 >> (uVar11 & 0x38));
    uVar11 = 0x10101000001 >> (uVar11 & 0x38);
    *puVar2 = (char)uVar11;
    uVar10 = (uint)uVar11 & 0xff;
    if ((uVar12 & 1) == 0) {
LAB_0019b108:
      bVar4 = uVar10 == 0;
      goto LAB_0019b110;
    }
  }
  else {
    uVar10 = (uint)(byte)*PTR_DAT_04bcbd30;
    if (*PTR_DAT_04bcc100 == '\0') goto LAB_0019b108;
  }
  bVar4 = false;
  if (uVar10 == 0) {
    *puVar2 = 1;
  }
LAB_0019b110:
  puVar2 = PTR_DAT_04bcc088;
  *PTR_DAT_04bcbd28 = bVar4;
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  *(int *)PTR_DAT_04bcc118 = *(int *)PTR_DAT_04bcc118 + 1;
  (**(code **)(*(long *)puVar2 + 0x20))(puVar2);
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  lVar7 = *(long *)puVar2;
  param_1[8] = (long)param_1;
  (**(code **)(lVar7 + 0x20))(puVar2);
  lVar7 = FUN_00185a6c(0x1d8);
  if (lVar7 != 0) {
    FUN_0019def8(lVar7,0,8,0);
  }
  cVar1 = *puVar3;
  param_1[2] = lVar7;
  if (cVar1 != '\0') {
    FUN_0019e850(*(undefined8 *)(lVar7 + 0x18),1);
  }
  lVar7 = FUN_00185a6c(0xa0);
  if (lVar7 != 0) {
    FUN_001990e0(lVar7);
  }
  param_1[3] = lVar7;
  lVar7 = FUN_00185a6c(0x80);
  FUN_001a1c14();
  param_1[4] = lVar7;
  plVar13 = *(long **)(lVar7 + 0x78);
  lVar7 = param_1[3];
  plVar5 = (long *)FUN_00187df4(0x18);
  *plVar5 = 0;
  plVar5[2] = lVar7;
  plVar8 = plVar13 + 9;
  lVar9 = *plVar8;
  *(long **)(lVar7 + 0x40) = plVar13;
  *plVar5 = lVar9;
  plVar5[1] = (long)plVar8;
  *plVar8 = (long)plVar5;
  lVar7 = plVar13[0xb];
  *(long **)(lVar9 + 8) = plVar5;
  plVar13[0xb] = lVar7 + 1;
  (**(code **)(*plVar13 + 0x70))(plVar13);
  lVar7 = FUN_00185a6c(0x98);
  if (lVar7 != 0) {
    FUN_001a0620(lVar7);
  }
  param_1[5] = lVar7;
  puVar2 = PTR_DAT_04bcb900;
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar10 = *puVar6;
    if (uVar10 != 0) {
      lVar7 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar5 = (long *)(*(long *)(lVar7 + (ulong)uVar10 * 8) + 0x20);
    }
  }
  if ((*plVar5 == 0) || (lVar7 = *(long *)(*plVar5 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar5 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  FUN_0019b354(*(undefined8 *)(param_1[4] + 0x78));
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}


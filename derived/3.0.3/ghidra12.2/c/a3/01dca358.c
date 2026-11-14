
void FUN_01dca358(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_50;
  bool local_44 [4];
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((DAT_04ca9180 != 0) &&
     (uVar7 = FUN_007b3b6c(DAT_04ca9180,&local_68,**(undefined8 **)(*(long *)PTR_DAT_04bb49f0 + 8),
                           (*(undefined8 **)(*(long *)PTR_DAT_04bb49f0 + 8))[1]), (uVar7 & 1) != 0))
  {
    local_44[0] = false;
    iVar5 = nn::account::IsNetworkServiceAccountAvailable(local_44,(UserHandle *)&local_68);
    if ((iVar5 == 0) &&
       ((local_44[0] != false &&
        (iVar5 = nn::account::GetNetworkServiceAccountId
                           ((NetworkServiceAccountId *)&local_50,(UserHandle *)&local_68),
        iVar5 == 0)))) {
      param_2[1] = local_50;
    }
  }
  param_2[2] = *(undefined8 *)(param_1 + 0x260);
  param_2[3] = *(undefined8 *)(param_1 + 0x268);
  *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x279);
  lVar14 = *DAT_0537d558;
  uVar7 = (ulong)*(byte *)(lVar14 + 0x471);
  if ((((7 < uVar7) || (*(char *)(lVar14 + 0x44c + uVar7 * 4 + 2) == -1)) ||
      (uVar7 = (ulong)*(ushort *)(lVar14 + 0x44c + uVar7 * 4), 7 < uVar7)) ||
     (lVar12 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar12 + uVar7 * 0x13f0 + 0x13d4) == '\0'))
  goto LAB_01dca60c;
  puVar13 = (uint *)(lVar12 + uVar7 * 0x13f0);
  uVar6 = puVar13[0x4f4];
  if ((2 < uVar6 || 7 < *puVar13) || *(long *)PTR_DAT_04bb46b0 == 0) goto LAB_01dca60c;
  if (uVar6 == 2) {
LAB_01dca4b0:
    if (DAT_055021a0 == 0) goto LAB_01dca60c;
    puVar8 = &LAB_001fdf00 + DAT_055021a0;
  }
  else if (uVar6 == 0) {
    if (7 < *(byte *)(lVar12 + uVar7 * 0x13f0 + 0x13d5)) goto LAB_01dca60c;
    puVar8 = (undefined1 *)FUN_026eed64();
    if (puVar8 == (undefined1 *)0x0) goto LAB_01dca4b0;
  }
  else {
    uVar7 = (ulong)*(byte *)(lVar12 + uVar7 * 0x13f0 + 0x13d5);
    if (((7 < uVar7) || (lVar12 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10), lVar12 == 0)) ||
       ((lVar12 = *(long *)(lVar12 + uVar7 * 8 + 0xf0), lVar12 == 0 ||
        (puVar8 = *(undefined1 **)(lVar12 + 0x20), puVar8 == (undefined1 *)0x0))))
    goto LAB_01dca60c;
  }
  uVar9 = FUN_026586c8();
  *param_2 = uVar9;
  if ((*(long **)(puVar8 + 0x18320) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(puVar8 + 0x18320), puVar10 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar10)();
    uVar6 = uVar6 ^ 1;
  }
  puVar4 = PTR_DAT_04bb2020;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "MainmenuFriendList";
  iVar5 = FUN_0274bbb0(*(long *)(puVar8 + 0x18308) + *(long *)(puVar8 + 0x18300),&local_68);
  *(bool *)(param_2 + 5) = iVar5 != 0;
  plVar11 = *(long **)(puVar8 + 0x18320);
  if ((uVar6 & 1) == 0) {
    if (plVar11 != (long *)0x0) {
      if ((undefined8 *)plVar11[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar11[1])();
        plVar11 = *(long **)(puVar8 + 0x18320);
        goto LAB_01dca590;
      }
      goto LAB_01dca594;
    }
LAB_01dca5b0:
    uVar6 = 1;
  }
  else {
LAB_01dca590:
    if (plVar11 == (long *)0x0) goto LAB_01dca5b0;
LAB_01dca594:
    if ((undefined8 *)*plVar11 == (undefined8 *)0x0) goto LAB_01dca5b0;
    uVar6 = (*(code *)**(undefined8 **)*plVar11)();
    uVar6 = uVar6 ^ 1;
  }
  local_68 = puVar4 + 0x10;
  pcStack_60 = "ChangedPermanentNum";
  iVar5 = FUN_0274bbb0(*(long *)(puVar8 + 0x18308) + *(long *)(puVar8 + 0x18300),&local_68);
  *(bool *)((long)param_2 + 0x29) = iVar5 != 0;
  if ((((uVar6 & 1) == 0) && (*(long *)(puVar8 + 0x18320) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(puVar8 + 0x18320) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  uVar3 = *(undefined1 *)(param_1 + 0x278);
  *(undefined1 *)((long)param_2 + 0x2c) = 0;
  *(undefined1 *)((long)param_2 + 0x2a) = uVar3;
LAB_01dca60c:
  uVar9 = param_2[1];
  puVar10 = (undefined8 *)(param_1 + 0xd8) + (ulong)(uint)(int)*(char *)(lVar14 + 0x473) * 6;
  if (7 < (uint)(int)*(char *)(lVar14 + 0x473)) {
    puVar10 = (undefined8 *)(param_1 + 0xd8);
  }
  *puVar10 = *param_2;
  puVar10[1] = uVar9;
  uVar9 = param_2[2];
  uVar1 = param_2[3];
  uVar2 = param_2[5];
  puVar10[4] = param_2[4];
  puVar10[5] = uVar2;
  puVar10[2] = uVar9;
  puVar10[3] = uVar1;
  return;
}


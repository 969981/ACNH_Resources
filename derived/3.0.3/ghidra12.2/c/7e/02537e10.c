
void FUN_02537e10(uint *param_1,byte *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  undefined4 local_2c [3];
  
  puVar10 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_2 < 8) {
    if (DAT_054f5738 != 0) {
      puVar10 = (undefined4 *)(DAT_054f5738 + (ulong)*param_2 * 4 + 0xde8);
    }
  }
  local_2c[0] = *puVar10;
  FUN_0071c8d0(&local_40,local_2c,PTR_DAT_04bb3238,0);
  plVar5 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
    if ((uVar8 & 1) == 0) {
      local_37 = '\0';
    }
  }
  uVar9 = 0;
  if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) &&
     (local_36 != '\0')) {
    uVar9 = 0;
    if (local_40[0xe] != 0) {
      uVar3 = *(uint *)(local_40[0xe] + 0x280);
      uVar9 = 0;
      if (uVar3 < 0x149) {
        uVar9 = uVar3;
      }
    }
    if (uVar9 == 0x1a) {
      uVar8 = (ulong)*param_2;
      puVar11 = (undefined8 *)(DAT_054f5738 + 0x2e8);
      if (uVar8 < 8) {
        puVar11 = puVar11 + uVar8 * 0x10;
        uVar12 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x18);
        uVar2 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 8);
        uVar13 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x10);
        *(undefined4 *)((long)puVar11 + 0x17) =
             *(undefined4 *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x1f);
        puVar11[1] = uVar13;
        puVar11[2] = uVar12;
        *puVar11 = uVar2;
        bVar4 = *param_2;
        bVar6 = 7 < bVar4;
        if (bVar6) {
          bVar4 = 0xff;
        }
        puVar1 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar4 * 0x70;
        if (bVar6) {
          puVar1 = PTR_DAT_04bc31b8;
        }
        uVar13 = *(undefined8 *)(puVar1 + 0x18);
        uVar2 = *(undefined8 *)(puVar1 + 0x10);
        puVar11[4] = *(undefined8 *)(puVar1 + 8);
        puVar11[5] = uVar2;
        puVar11[6] = uVar13;
        uVar2 = *(undefined8 *)(puVar1 + 0x20);
        uVar13 = *(undefined8 *)(puVar1 + 0x28);
        uVar12 = *(undefined8 *)(puVar1 + 0x38);
        puVar11[9] = *(undefined8 *)(puVar1 + 0x30);
        puVar11[10] = uVar12;
        puVar11[7] = uVar2;
        puVar11[8] = uVar13;
        uVar12 = *(undefined8 *)(puVar1 + 0x50);
        uVar2 = *(undefined8 *)(puVar1 + 0x40);
        uVar13 = *(undefined8 *)(puVar1 + 0x48);
        *(undefined8 *)((long)puVar11 + 0x6e) = *(undefined8 *)(puVar1 + 0x56);
        puVar11[0xc] = uVar13;
        puVar11[0xd] = uVar12;
        puVar11[0xb] = uVar2;
      }
      uVar9 = (uint)*(byte *)(puVar11 + 4);
      if (0x78 < uVar9) {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  *param_1 = uVar9;
  return;
}


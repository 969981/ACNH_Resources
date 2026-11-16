
undefined8 FUN_0254ddc4(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  undefined4 local_24;
  
  puVar9 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_24 = *puVar9;
  FUN_0071cb58(&local_38,&local_24,PTR_DAT_04bb3238,0);
  plVar4 = local_38;
  if (local_38 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_2e = '\0';
    }
  }
  uVar8 = 0;
  if ((((local_38 != (long *)0x0) && (local_30 != '\0')) && (local_2e != '\0')) &&
     (local_2f != '\0')) {
    uVar11 = 0;
    if (local_38[0xe] != 0) {
      uVar2 = *(uint *)(local_38[0xe] + 0x280);
      uVar11 = 0;
      if (uVar2 < 0x149) {
        uVar11 = uVar2;
      }
    }
    if (uVar11 == 0x89) {
      uVar7 = (ulong)*param_1;
      puVar12 = (undefined8 *)(DAT_054f5738 + 0x2e8);
      if (uVar7 < 8) {
        puVar12 = puVar12 + uVar7 * 0x10;
        uVar13 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x18);
        uVar8 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 8);
        uVar14 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x10);
        *(undefined4 *)((long)puVar12 + 0x17) =
             *(undefined4 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x1f);
        puVar12[1] = uVar14;
        puVar12[2] = uVar13;
        *puVar12 = uVar8;
        bVar3 = *param_1;
        bVar5 = 7 < bVar3;
        if (bVar5) {
          bVar3 = 0xff;
        }
        puVar1 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar3 * 0x70;
        if (bVar5) {
          puVar1 = PTR_DAT_04bc31b8;
        }
        uVar14 = *(undefined8 *)(puVar1 + 0x18);
        uVar8 = *(undefined8 *)(puVar1 + 0x10);
        puVar12[4] = *(undefined8 *)(puVar1 + 8);
        puVar12[5] = uVar8;
        puVar12[6] = uVar14;
        uVar8 = *(undefined8 *)(puVar1 + 0x20);
        uVar14 = *(undefined8 *)(puVar1 + 0x28);
        uVar13 = *(undefined8 *)(puVar1 + 0x38);
        puVar12[9] = *(undefined8 *)(puVar1 + 0x30);
        puVar12[10] = uVar13;
        puVar12[7] = uVar8;
        puVar12[8] = uVar14;
        uVar13 = *(undefined8 *)(puVar1 + 0x50);
        uVar8 = *(undefined8 *)(puVar1 + 0x40);
        uVar14 = *(undefined8 *)(puVar1 + 0x48);
        *(undefined8 *)((long)puVar12 + 0x6e) = *(undefined8 *)(puVar1 + 0x56);
        puVar12[0xc] = uVar14;
        puVar12[0xd] = uVar13;
        puVar12[0xb] = uVar8;
      }
      if (((*(char *)((long)puVar12 + 0x2d) == '\0') || (*(char *)((long)puVar12 + 0x2e) == '\0'))
         || ((lVar10 = local_38[0x53], lVar10 != 0 &&
             ((byte)(*(byte *)(*(long *)(lVar10 + 0xbdd8) + 0xee) &
                     *(byte *)(*(long *)(lVar10 + 0xbdd0) + 0xee) &
                     *(byte *)(*(long *)(lVar10 + 0xbde0) + 0xee) &
                     *(byte *)(*(long *)(lVar10 + 0xbde8) + 0xee) &
                     *(byte *)(*(long *)(lVar10 + 0xbdf0) + 0xee) &
                     *(byte *)(*(long *)(lVar10 + 0xbdf8) + 0xee) &
                     *(byte *)(*(long *)(lVar10 + 0xbe00) + 0xee) &
                    *(byte *)(*(long *)(lVar10 + 0xbe08) + 0xee) &
                    *(byte *)(*(long *)(lVar10 + 0x1480) + 0xee) &
                    *(byte *)(*(long *)(lVar10 + 0x1488) + 0xee) &
                    *(byte *)(*(long *)(lVar10 + 0x1490) + 0xee)) == 0)))) {
        return 0;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


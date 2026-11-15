
void FUN_0214e990(long param_1,int param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined *local_40;
  char *pcStack_38;
  uint local_14;
  
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 != param_1 + 0x70) {
    lVar8 = lVar7 + -0x10;
    do {
      if (*(int *)(lVar8 + 4) == 6) {
        if (param_2 != 3) {
          return;
        }
        local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
        lVar7 = *(long *)PTR_DAT_04bb2720;
        if (lVar7 == 0) {
          puVar10 = &DAT_055c04a0;
        }
        else {
          puVar10 = &DAT_055c04a0;
          if (*(long *)(lVar7 + 0x330) != 0) {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
            iVar9 = FUN_006bd550(*puVar10,0);
            puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar9 != 0x758f7eaf) {
              puVar10 = &DAT_055c04a0;
            }
          }
        }
        uVar6 = FUN_02b64e40(&local_40,*(undefined4 *)(puVar10 + 7));
        if ((uVar6 & 1) == 0) {
          return;
        }
        uVar5 = FUN_026641e0((ulong)local_40 & 0xffffffff,0);
        if (9 < uVar5) {
          return;
        }
        if ((&DAT_053fee41)[(ulong)uVar5 * 0xba0] == '\0') {
          return;
        }
        *(undefined *)(lVar8 + 2) = (&DAT_053fee2a)[(ulong)uVar5 * 0xba0];
        *(undefined *)(lVar8 + 3) = (&DAT_053fee2b)[(ulong)uVar5 * 0xba0];
        return;
      }
      if (*(int *)(lVar8 + 4) == 5) {
        if (param_2 == 2) {
          local_14 = 5;
        }
        else {
          if (param_2 != 1) {
            return;
          }
          local_14 = 0;
        }
        pbVar2 = &DAT_0417fb5a + (ulong)local_14 * 3;
        if (0xf < local_14) {
          pbVar2 = &DAT_0417fb5a;
        }
        bVar4 = pbVar2[2];
        iVar9 = (int)(char)bVar4;
        if (*pbVar2 == 0) {
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          pcStack_38 = "RegulationType2";
          local_40 = puVar1;
          uVar6 = FUN_0273f0a0(&local_40);
          if ((uVar6 & 1) == 0) {
            pcStack_38 = "RegulationType3";
            local_40 = puVar1;
            uVar5 = FUN_0273f0a0(&local_40);
            iVar9 = iVar9 + (uVar5 & (char)bVar4 < '\x19');
          }
        }
        else if ((*pbVar2 & 1) != 0) {
          return;
        }
        *(undefined1 *)(lVar8 + 3) = 0;
        cVar3 = (char)iVar9 + '\x18';
        if (0x4ffffff < iVar9 * 0x1000000) {
          cVar3 = (char)iVar9;
        }
        *(char *)(lVar8 + 2) = cVar3;
        return;
      }
      lVar7 = *(long *)(lVar7 + 8);
      lVar8 = lVar7 + -0x10;
    } while (lVar8 != param_1 + 0x60);
  }
  return;
}


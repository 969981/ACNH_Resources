
void FUN_021aa8a0(void)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint local_34;
  
  puVar5 = PTR_DAT_04bb27d0;
  puVar4 = PTR_DAT_04bb2720;
  sVar3 = *(short *)PTR_DAT_04bbdeb0;
  if (sVar3 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 7 & 1) != 0) {
      uVar6 = *(ushort *)PTR_DAT_04bb6298;
      if ((long)(short)uVar6 != 0xffffffffffffffff) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8);
        if (0xff < uVar6) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 7 & 1) != 0) {
          return;
        }
      }
      if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
        lVar10 = *(long *)PTR_DAT_04bb2720;
        if (lVar10 == 0) {
          puVar13 = &DAT_055c04a0;
        }
        else {
          puVar13 = &DAT_055c04a0;
          if (*(long *)(lVar10 + 0x330) != 0) {
            puVar13 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar7 = FUN_006bd550(*puVar13,0);
            puVar13 = (undefined8 *)PTR_DAT_04bc3a78;
            if (iVar7 != 0x758f7eaf) {
              puVar13 = &DAT_055c04a0;
            }
          }
        }
        if (DAT_055c1b60 != &DAT_055c1b58) {
          iVar7 = 0;
          puVar12 = DAT_055c1b60;
          do {
            if (*(int *)(puVar12 + -1) == *(int *)(puVar13 + 7)) goto LAB_021aaa18;
            puVar12 = (undefined8 *)puVar12[1];
            iVar7 = iVar7 + 1;
          } while (puVar12 != &DAT_055c1b58);
        }
        iVar7 = 0xffff;
LAB_021aaa18:
        uVar8 = FUN_01d69340(*(undefined8 *)(*(long *)puVar5 + 0x10),iVar7,1);
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      lVar10 = *(long *)puVar4;
      local_34 = 0;
      if (lVar10 == 0) {
        puVar13 = &DAT_055c04a0;
      }
      else {
        puVar13 = &DAT_055c04a0;
        if (*(long *)(lVar10 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar7 = FUN_006bd550(*puVar13,0);
          puVar13 = (undefined8 *)PTR_DAT_04bc3a78;
          if (iVar7 != 0x758f7eaf) {
            puVar13 = &DAT_055c04a0;
          }
        }
      }
      uVar8 = FUN_02b64e40(&local_34,*(undefined4 *)(puVar13 + 7));
      puVar4 = PTR_DAT_04bb26a8;
      if ((uVar8 & 1) != 0) {
        lVar10 = *(long *)PTR_DAT_04bb26a8;
        if (local_34 < 10) {
          uVar1 = local_34 * 2 + 0xe5;
          if (*(uint *)(lVar10 + 0x770) <= uVar1) {
            uVar1 = 0;
          }
          lVar11 = *(long *)(lVar10 + 0x778) + (ulong)uVar1 * 400;
          if (*(long *)(lVar10 + 0x778) != 0) {
            uVar6 = FUN_0277d6c4(PTR_DAT_04bb37e0);
            for (lVar10 = *(long *)(lVar10 + 0x19f800); lVar10 != 0; lVar10 = *(long *)(lVar10 + 8))
            {
              while (*(ushort *)(lVar10 + 0x20) <= uVar6) {
                if (uVar6 <= *(ushort *)(lVar10 + 0x20)) {
                  uVar9 = *(undefined4 *)(lVar10 + 0x24);
                  goto LAB_021aab44;
                }
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 == 0) goto LAB_021aab38;
              }
            }
LAB_021aab38:
            uVar9 = 0;
LAB_021aab44:
            *(undefined4 *)(lVar11 + 0x138) = uVar9;
            *(undefined2 *)(lVar11 + 0x131) = 0x101;
            lVar10 = *(long *)puVar4;
            *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
          }
        }
        if (local_34 < 10) {
          uVar1 = local_34 * 2 + 0xe6;
          if (*(uint *)(lVar10 + 0x770) <= uVar1) {
            uVar1 = 0;
          }
          lVar11 = *(long *)(lVar10 + 0x778) + (ulong)uVar1 * 400;
          if (*(long *)(lVar10 + 0x778) != 0) {
            uVar6 = FUN_0277d6c4(PTR_DAT_04bb37e0);
            for (lVar10 = *(long *)(lVar10 + 0x19f800); lVar10 != 0; lVar10 = *(long *)(lVar10 + 8))
            {
              while (*(ushort *)(lVar10 + 0x20) <= uVar6) {
                if (uVar6 <= *(ushort *)(lVar10 + 0x20)) {
                  uVar9 = *(undefined4 *)(lVar10 + 0x24);
                  goto LAB_021aabf0;
                }
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 == 0) goto LAB_021aabe4;
              }
            }
LAB_021aabe4:
            uVar9 = 0;
LAB_021aabf0:
            *(undefined4 *)(lVar11 + 0x138) = uVar9;
            *(undefined2 *)(lVar11 + 0x131) = 0x101;
            *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  return;
}


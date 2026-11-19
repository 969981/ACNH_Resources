
void FUN_03aedff0(long param_1,uint *param_2,int *param_3,long param_4,long param_5)

{
  undefined *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  if (*(char *)(param_5 + 0x58) != '\0') {
    *(undefined1 *)(param_5 + 0x58) = 0;
    *(uint *)(*(long *)(param_5 + 0x38) + 0x260) = *(uint *)(*(long *)(param_5 + 0x38) + 0x260) | 1;
  }
  uVar13 = 0;
  puVar1 = PTR_DAT_04bbdac8 + 0x10;
  do {
    uVar7 = *(uint *)(param_1 + 0x18 + uVar13 * 4);
    if (0 < (int)uVar7) {
      uVar15 = 0;
      do {
        lVar14 = *(long *)(param_1 + 0x10);
        lVar10 = (long)(int)((int)uVar13 + *(uint *)(param_1 + 8) * uVar15);
        if (*(uint *)(param_1 + 0xc) <= uVar15 || *(uint *)(param_1 + 8) <= uVar13) {
          lVar10 = 0;
        }
        puVar17 = (undefined8 *)(lVar14 + lVar10 * 0x58);
        fVar19 = *(float *)((long)puVar17 + 0x34);
        if ((*(uint *)((long)puVar17 + 0x3c) >> 1 & 1) == 0) {
          lVar16 = lVar14 + lVar10 * 0x58;
          uVar6 = *param_2;
          puVar18 = *(undefined8 **)(param_4 + 0x28);
          uVar21 = *(undefined4 *)(lVar16 + 0x2c);
          uVar20 = *(undefined4 *)(lVar16 + 0x30);
          if (((*PTR_DAT_04bbdac0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbdac0), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bbdab8 = puVar1;
            __cxa_guard_release(PTR_DAT_04bbdac0);
          }
          uVar9 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bbdab8);
          if ((uVar9 & 1) == 0) {
            puVar18 = (undefined8 *)0x0;
          }
          lVar11 = puVar18[3];
          uVar3 = uVar6;
          if (*(uint *)(puVar18 + 2) <= uVar6) {
            uVar3 = 0;
          }
          puVar12 = (ushort *)(lVar11 + (long)(int)uVar3 * 0x58);
          *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(lVar16 + 0x20);
          *(undefined4 *)(puVar12 + 10) = *(undefined4 *)(lVar16 + 0x24);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(lVar16 + 0x28);
          *(undefined4 *)(puVar12 + 0xe) = uVar21;
          uVar4 = *puVar17;
          uVar5 = puVar17[1];
          *(undefined4 *)(puVar12 + 0x20) = uVar20;
          *(float *)(puVar12 + 0x22) = fVar19;
          *(undefined8 *)(puVar12 + 0x10) = uVar4;
          *(undefined8 *)(puVar12 + 0x14) = uVar5;
          puVar2 = puVar12 + 2;
          if (0.0 <= fVar19) {
            *puVar12 = *puVar12 | 2;
            lVar11 = lVar11 + (long)(int)uVar3 * 0x58;
            puVar2[0] = 0xffff;
            puVar2[1] = 0xffff;
            uVar4 = *(undefined8 *)(lVar16 + 0x18);
            *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar16 + 0x10);
            *(undefined8 *)(lVar11 + 0x38) = uVar4;
          }
          else {
            *puVar12 = *puVar12 & 0xfffd;
            puVar2[0] = 0xffff;
            puVar2[1] = 0xffff;
          }
          (**(code **)(**(long **)(param_4 + 0x28) + 0xa0))
                    (*(long **)(param_4 + 0x28),uVar6,*(undefined4 *)(lVar14 + lVar10 * 0x58 + 0x40)
                    );
          *param_2 = *param_2 + 1;
        }
        else {
          lVar16 = lVar14 + lVar10 * 0x58;
          if ((*(uint *)((long)puVar17 + 0x3c) >> 2 & 1) == 0) {
            lVar14 = lVar14 + lVar10 * 0x58;
            iVar8 = *param_3;
            FUN_03977cc0(*(undefined4 *)(lVar14 + 0x50),*(undefined4 *)(lVar14 + 0x2c),
                         *(undefined4 *)(lVar14 + 0x30),*(undefined4 *)(lVar14 + 0x54),param_4,iVar8
                         ,(undefined4 *)(lVar16 + 0x20),lVar14 + 0x44,puVar17,0.0 <= fVar19,
                         lVar14 + 0x10);
            (**(code **)(**(long **)(param_4 + 0x30) + 0xa0))
                      (*(long **)(param_4 + 0x30),iVar8,*(undefined4 *)(lVar14 + 0x40));
            *param_3 = *param_3 + 1;
          }
          else {
            if (*(char *)(param_5 + 0x58) == '\0') {
              *(undefined1 *)(param_5 + 0x58) = 1;
              *(uint *)(*(long *)(param_5 + 0x38) + 0x260) =
                   *(uint *)(*(long *)(param_5 + 0x38) + 0x260) | 1;
            }
            lVar14 = lVar14 + lVar10 * 0x58;
            *(undefined4 *)(param_5 + 0x2e0) = *(undefined4 *)(lVar16 + 0x20);
            *(undefined4 *)(param_5 + 0x2e4) = *(undefined4 *)(lVar16 + 0x24);
            *(undefined4 *)(param_5 + 0x2e8) = *(undefined4 *)(lVar16 + 0x28);
            *(undefined4 *)(param_5 + 0x308) = *(undefined4 *)(lVar14 + 0x44);
            *(undefined4 *)(param_5 + 0x30c) = *(undefined4 *)(lVar14 + 0x48);
            *(undefined4 *)(param_5 + 0x310) = *(undefined4 *)(lVar14 + 0x4c);
            *(undefined4 *)(param_5 + 0x330) = *(undefined4 *)(lVar14 + 0x50);
            *(undefined4 *)(param_5 + 0x350) = *(undefined4 *)(lVar14 + 0x2c);
            uVar4 = puVar17[1];
            *(undefined8 *)(param_5 + 0x370) = *puVar17;
            *(undefined8 *)(param_5 + 0x378) = uVar4;
            *(undefined4 *)(param_5 + 0x3e0) = *(undefined4 *)(lVar14 + 0x30);
            uVar20 = *(undefined4 *)(lVar14 + 0x54);
            *(bool *)(param_5 + 0x420) = 0.0 <= fVar19;
            *(undefined4 *)(param_5 + 0x400) = uVar20;
            uVar4 = *(undefined8 *)(lVar14 + 0x18);
            *(undefined8 *)(param_5 + 0x398) = *(undefined8 *)(lVar14 + 0x10);
            *(undefined8 *)(param_5 + 0x3a0) = uVar4;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar7 != uVar15);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 3);
  return;
}


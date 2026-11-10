
uint FUN_00200e10(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ushort uVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [8];
  char local_1a8;
  undefined8 local_140;
  byte local_138 [4];
  undefined4 local_134;
  long *local_130;
  long lStack_128;
  long local_120;
  long *plStack_118;
  long local_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [8];
  char local_c8;
  byte local_58 [4];
  undefined4 local_54;
  
  puVar14 = auStack_100;
  lVar11 = param_4;
  FUN_001abc3c(auStack_d0);
  puVar6 = PTR_DAT_04bcb900;
  plVar22 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar7 = *puVar8;
    if (uVar7 != 0) {
      lVar16 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar16 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar22 = (long *)(*(long *)(lVar16 + (ulong)uVar7 * 8) + 0x20);
    }
  }
  if ((*plVar22 == 0) || (lVar16 = *(long *)(*plVar22 + 0x10), lVar16 == 0)) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x10);
  }
  plVar22 = (long *)(lVar16 + 0x78);
  (**(code **)(*plVar22 + 0x10))(plVar22);
  uVar5 = *(ushort *)(param_1 + 0x48);
  local_54 = CONCAT22(local_54._2_2_,uVar5);
  if (uVar5 < 0x7f) {
    local_58[0] = (byte)uVar5 | 0x80;
    FUN_00197478(auStack_d0,local_58,1);
    uVar9 = FUN_00194070(param_2);
    if ((uVar9 & 1) != 0) goto LAB_00200f54;
LAB_00200f18:
    uVar7 = 0;
  }
  else {
    local_58[0] = 0xff;
    FUN_00197478(auStack_d0,local_58,1);
    FUN_00197478(auStack_d0,&local_54,2);
    uVar9 = FUN_00194070(param_2);
    if ((uVar9 & 1) == 0) goto LAB_00200f18;
LAB_00200f54:
    local_54 = *(undefined4 *)(param_2 + 0x18);
    FUN_00197478(auStack_d0,&local_54,4);
    local_54 = 4;
    FUN_00197478(auStack_d0,&local_54,4);
    local_54 = (undefined4)*(undefined8 *)(param_4 + 0x10);
    FUN_00197478(auStack_d0,&local_54,4);
    for (lVar16 = *(long *)(param_4 + 8); lVar16 != param_4; lVar16 = *(long *)(lVar16 + 8)) {
      FUN_001f76c0(auStack_d0,lVar16 + 0x10);
    }
    if (local_c8 == '\0') {
      uVar15 = *(undefined8 *)(param_7 + 8);
      (**(code **)(**(long **)PTR_DAT_04bcc968 + 0x10))
                (*(long **)PTR_DAT_04bcc968,auStack_d0,uVar15);
      if (local_c8 == '\0') {
        puVar21 = *(undefined8 **)(param_2 + 0x98);
        plVar1 = (long *)(param_2 + 0x90);
        if (puVar21 != *(undefined8 **)(param_2 + 0xa0)) {
          plVar17 = puVar21 + 1;
          *puVar21 = param_3;
          *(long **)(param_2 + 0x98) = plVar17;
LAB_00201128:
          if (plVar17 == *(long **)(param_2 + 0xa0)) {
            uVar19 = (long)plVar17 - *plVar1;
            uVar9 = ((long)uVar19 >> 3) + 1;
            if (uVar9 >> 0x3d != 0) goto LAB_002012d8;
            uVar2 = (long)uVar19 >> 2;
            if ((ulong)((long)uVar19 >> 2) <= uVar9) {
              uVar2 = uVar9;
            }
            if (0x7ffffffffffffff7 < uVar19) {
              uVar2 = 0x1fffffffffffffff;
            }
            if (uVar2 == 0) {
              lVar16 = 0;
            }
            else {
              lVar16 = FUN_00187df4(uVar2 << 3);
            }
            plVar17 = (long *)(lVar16 + ((long)uVar19 >> 3) * 8);
            plVar18 = plVar17 + 1;
            *plVar17 = param_5;
            plVar4 = *(long **)(param_2 + 0x90);
            plVar12 = *(long **)(param_2 + 0x98);
            if (plVar12 != plVar4) {
              do {
                plVar12 = plVar12 + -1;
                plVar17 = plVar17 + -1;
                *plVar17 = *plVar12;
              } while (plVar12 != plVar4);
              plVar12 = (long *)*plVar1;
            }
            *(long **)(param_2 + 0x90) = plVar17;
            *(long **)(param_2 + 0x98) = plVar18;
            *(ulong *)(param_2 + 0xa0) = lVar16 + uVar2 * 8;
            if (plVar12 != (long *)0x0) {
              FUN_00187e4c();
              plVar18 = *(long **)(param_2 + 0x98);
            }
          }
          else {
            plVar18 = plVar17 + 1;
            *plVar17 = param_5;
            *(long **)(param_2 + 0x98) = plVar18;
          }
          if (plVar18 == *(long **)(param_2 + 0xa0)) {
            uVar19 = (long)plVar18 - *plVar1;
            param_5 = (long)uVar19 >> 3;
            uVar9 = param_5 + 1;
            if (uVar9 >> 0x3d != 0) goto LAB_002012d8;
            uVar2 = (long)uVar19 >> 2;
            if ((ulong)((long)uVar19 >> 2) <= uVar9) {
              uVar2 = uVar9;
            }
            if (0x7ffffffffffffff7 < uVar19) {
              uVar2 = 0x1fffffffffffffff;
            }
            if (uVar2 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = FUN_00187df4(uVar2 << 3);
            }
            plVar17 = (long *)(lVar11 + param_5 * 8);
            plVar18 = plVar17 + 1;
            *plVar17 = param_6;
            plVar4 = *(long **)(param_2 + 0x90);
            plVar12 = *(long **)(param_2 + 0x98);
            if (plVar12 != plVar4) {
              do {
                plVar12 = plVar12 + -1;
                plVar17 = plVar17 + -1;
                *plVar17 = *plVar12;
              } while (plVar12 != plVar4);
              plVar12 = (long *)*plVar1;
            }
            *(long **)(param_2 + 0x90) = plVar17;
            *(long **)(param_2 + 0x98) = plVar18;
            *(ulong *)(param_2 + 0xa0) = lVar11 + uVar2 * 8;
            if (plVar12 != (long *)0x0) {
              FUN_00187e4c();
            }
          }
          else {
            *plVar18 = param_6;
            *(long **)(param_2 + 0x98) = plVar18 + 1;
          }
          *(undefined **)(PTR_DAT_04bccb08 + 0x18) = PTR_LAB_04bccb20;
          if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
            (**(code **)(*plVar22 + 0x20))(plVar22);
            uVar7 = FUN_001f9220(param_1,param_2,auStack_d0);
            goto LAB_00201050;
          }
          uVar7 = FUN_001f9220(param_1,param_2,auStack_d0);
          goto LAB_00201040;
        }
        uVar19 = (long)puVar21 - *plVar1;
        uVar9 = ((long)uVar19 >> 3) + 1;
        if (uVar9 >> 0x3d == 0) {
          uVar2 = (long)uVar19 >> 2;
          if ((ulong)((long)uVar19 >> 2) <= uVar9) {
            uVar2 = uVar9;
          }
          if (0x7ffffffffffffff7 < uVar19) {
            uVar2 = 0x1fffffffffffffff;
          }
          if (uVar2 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = FUN_00187df4(uVar2 << 3);
          }
          puVar21 = (undefined8 *)(lVar16 + ((long)uVar19 >> 3) * 8);
          plVar17 = puVar21 + 1;
          *puVar21 = param_3;
          puVar3 = *(undefined8 **)(param_2 + 0x90);
          puVar10 = *(undefined8 **)(param_2 + 0x98);
          if (puVar10 != puVar3) {
            do {
              puVar10 = puVar10 + -1;
              puVar21 = puVar21 + -1;
              *puVar21 = *puVar10;
            } while (puVar10 != puVar3);
            puVar10 = (undefined8 *)*plVar1;
          }
          *(undefined8 **)(param_2 + 0x90) = puVar21;
          *(long **)(param_2 + 0x98) = plVar17;
          *(ulong *)(param_2 + 0xa0) = lVar16 + uVar2 * 8;
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00187e4c();
            plVar17 = *(long **)(param_2 + 0x98);
          }
          goto LAB_00201128;
        }
LAB_002012d8:
        auVar23 = FUN_001f4808(plVar1);
        lVar13 = auVar23._8_8_;
        lVar16 = auVar23._0_8_;
        puVar14 = auStack_1e0;
        local_140 = 0x2012e0;
        local_130 = plVar1;
        lStack_128 = param_5;
        local_120 = param_6;
        plStack_118 = plVar22;
        local_110 = param_1;
        lStack_108 = param_2;
        FUN_001abc3c(auStack_1b0);
        puVar6 = PTR_DAT_04bcb900;
        plVar22 = (long *)(PTR_DAT_04bcb900 + 0x28);
        if (*PTR_DAT_04bcb908 != '\0') {
          puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar7 = *puVar8;
          if (uVar7 != 0) {
            lVar20 = **(long **)(puVar6 + 0xa0);
            if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar20 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            }
            plVar22 = (long *)(*(long *)(lVar20 + (ulong)uVar7 * 8) + 0x20);
          }
        }
        if ((*plVar22 == 0) || (lVar20 = *(long *)(*plVar22 + 0x10), lVar20 == 0)) {
          lVar20 = 0;
        }
        else {
          lVar20 = *(long *)(lVar20 + 0x10);
        }
        plVar22 = (long *)(lVar20 + 0x78);
        (**(code **)(*plVar22 + 0x10))(plVar22);
        uVar5 = *(ushort *)(lVar16 + 0x48);
        local_134 = CONCAT22(local_134._2_2_,uVar5);
        if (uVar5 < 0x7f) {
          local_138[0] = (byte)uVar5 | 0x80;
          FUN_00197478(auStack_1b0,local_138,1);
          uVar9 = FUN_00194070(lVar13);
          if ((uVar9 & 1) != 0) goto LAB_00201410;
LAB_002013d4:
          uVar7 = 0;
        }
        else {
          local_138[0] = 0xff;
          FUN_00197478(auStack_1b0,local_138,1);
          FUN_00197478(auStack_1b0,&local_134,2);
          uVar9 = FUN_00194070(lVar13);
          if ((uVar9 & 1) == 0) goto LAB_002013d4;
LAB_00201410:
          local_134 = *(undefined4 *)(lVar13 + 0x18);
          FUN_00197478(auStack_1b0,&local_134,4);
          local_134 = 7;
          FUN_00197478(auStack_1b0,&local_134,4);
          FUN_001f76c0(auStack_1b0,uVar15);
          if (local_1a8 == '\0') {
            FUN_001f76c0(auStack_1b0,lVar11);
            if (local_1a8 == '\0') {
              *(undefined **)(PTR_DAT_04bccb08 + 0x30) = PTR_LAB_04bccb28;
              if ((*(char *)(lVar16 + 0x70) != '\0') && ((*(byte *)(lVar16 + 0x60) >> 4 & 1) != 0))
              {
                (**(code **)(*plVar22 + 0x20))(plVar22);
                uVar7 = FUN_001f9220(lVar16,lVar13,auStack_1b0);
                goto LAB_002014c0;
              }
              uVar7 = FUN_001f9220(lVar16,lVar13,auStack_1b0);
              goto LAB_002014b0;
            }
            local_134 = 0x8001000a;
            FUN_0018aa70(auStack_1e0,&local_134);
          }
          else {
            local_134 = 0x8001000a;
            FUN_0018aa70(auStack_1c8,&local_134);
            puVar14 = auStack_1c8;
          }
          FUN_00197bcc(lVar13,puVar14);
          uVar7 = 1;
        }
LAB_002014b0:
        (**(code **)(*plVar22 + 0x20))(plVar22);
LAB_002014c0:
        FUN_001abdec(auStack_1b0);
        return uVar7 & 1;
      }
      local_54 = 0x8001000a;
      FUN_0018aa70(auStack_100,&local_54);
    }
    else {
      local_54 = 0x8001000a;
      FUN_0018aa70(auStack_e8,&local_54);
      puVar14 = auStack_e8;
    }
    FUN_00197bcc(param_2,puVar14);
    uVar7 = 1;
  }
LAB_00201040:
  (**(code **)(*plVar22 + 0x20))(plVar22);
LAB_00201050:
  FUN_001abdec(auStack_d0);
  return uVar7 & 1;
}



ulong FUN_001ffb80(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [8];
  char local_b0;
  byte local_48 [4];
  undefined4 local_44;
  
  FUN_001abc3c(auStack_b8);
  puVar6 = PTR_DAT_04bcb900;
  plVar17 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar7 = *puVar8;
    if (uVar7 != 0) {
      lVar13 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar13 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar17 = (long *)(*(long *)(lVar13 + (ulong)uVar7 * 8) + 0x20);
    }
  }
  if ((*plVar17 == 0) || (lVar13 = *(long *)(*plVar17 + 0x10), lVar13 == 0)) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x10);
  }
  plVar17 = (long *)(lVar13 + 0x78);
  (**(code **)(*plVar17 + 0x10))(plVar17);
  uVar5 = *(ushort *)(param_1 + 0x48);
  local_44 = CONCAT22(local_44._2_2_,uVar5);
  if (uVar5 < 0x7f) {
    local_48[0] = (byte)uVar5 | 0x80;
    FUN_00197478(auStack_b8,local_48,1);
    uVar9 = FUN_00194070(param_2);
    if ((uVar9 & 1) != 0) goto LAB_001ffcb0;
LAB_001ffc74:
    uVar7 = 0;
  }
  else {
    local_48[0] = 0xff;
    FUN_00197478(auStack_b8,local_48,1);
    FUN_00197478(auStack_b8,&local_44,2);
    uVar9 = FUN_00194070(param_2);
    if ((uVar9 & 1) == 0) goto LAB_001ffc74;
LAB_001ffcb0:
    local_44 = *(undefined4 *)(param_2 + 0x18);
    FUN_00197478(auStack_b8,&local_44,4);
    local_44 = 6;
    uVar12 = 4;
    FUN_00197478(auStack_b8,&local_44,4);
    FUN_001fef08(auStack_b8,param_3);
    if (local_b0 == '\0') {
      puVar15 = *(undefined8 **)(param_2 + 0x98);
      if (puVar15 == *(undefined8 **)(param_2 + 0xa0)) {
        plVar1 = (long *)(param_2 + 0x90);
        uVar14 = (long)puVar15 - *plVar1;
        uVar9 = ((long)uVar14 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) {
          auVar18 = FUN_001f4808(plVar1);
          lVar11 = auVar18._8_8_;
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar4 = *(long *)(lVar11 + 0x18);
          if ((ulong)(*(long *)(lVar13 + 0x18) - lVar4) < 4) {
            *(undefined1 *)(lVar11 + 8) = 1;
          }
          else {
            uVar7 = *(uint *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 0x28) + lVar4);
            *(long *)(lVar11 + 0x18) = lVar4 + 4;
            uVar7 = uVar7 & 0x7fff;
            if (0xfffffff9 < uVar7 - 7) {
              if (*(code **)(PTR_DAT_04bcca98 + (ulong)(uVar7 - 1) * 8) == (code *)0x0) {
                return auVar18._0_8_;
              }
                    /* WARNING: Could not recover jumptable at 0x001ffeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)(PTR_DAT_04bcca98 + (ulong)(uVar7 - 1) * 8))(lVar11,uVar12);
              return uVar9;
            }
          }
          local_e0 = 0x1ffe60;
          local_d4 = 0x80010002;
          FUN_0018aa70(auStack_f8,&local_d4);
          uVar9 = FUN_0018a158();
          return uVar9;
        }
        uVar2 = (long)uVar14 >> 2;
        if ((ulong)((long)uVar14 >> 2) <= uVar9) {
          uVar2 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar14) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = FUN_00187df4(uVar2 << 3);
        }
        puVar15 = (undefined8 *)(lVar13 + ((long)uVar14 >> 3) * 8);
        puVar16 = puVar15 + 1;
        *puVar15 = param_4;
        puVar3 = *(undefined8 **)(param_2 + 0x90);
        puVar10 = *(undefined8 **)(param_2 + 0x98);
        if (puVar10 != puVar3) {
          do {
            puVar10 = puVar10 + -1;
            puVar15 = puVar15 + -1;
            *puVar15 = *puVar10;
          } while (puVar10 != puVar3);
          puVar10 = (undefined8 *)*plVar1;
        }
        *(undefined8 **)(param_2 + 0x90) = puVar15;
        *(undefined8 **)(param_2 + 0x98) = puVar16;
        *(ulong *)(param_2 + 0xa0) = lVar13 + uVar2 * 8;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_00187e4c();
        }
      }
      else {
        *puVar15 = param_4;
        *(undefined8 **)(param_2 + 0x98) = puVar15 + 1;
      }
      *(undefined **)(PTR_DAT_04bcca98 + 0x28) = PTR_LAB_04bccab8;
      if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
        (**(code **)(*plVar17 + 0x20))(plVar17);
        uVar7 = FUN_001f9220(param_1,param_2,auStack_b8);
        goto LAB_001ffe0c;
      }
      uVar7 = FUN_001f9220(param_1,param_2,auStack_b8);
    }
    else {
      local_44 = 0x8001000a;
      FUN_0018aa70(auStack_d0,&local_44);
      FUN_00197bcc(param_2,auStack_d0);
      uVar7 = 1;
    }
  }
  (**(code **)(*plVar17 + 0x20))(plVar17);
LAB_001ffe0c:
  FUN_001abdec(auStack_b8);
  return (ulong)(uVar7 & 1);
}



uint FUN_00200a30(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  code *pcVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [8];
  char local_b8;
  byte local_48 [4];
  undefined4 local_44;
  
  puVar11 = auStack_f0;
  FUN_001abc3c(auStack_c0);
  puVar6 = PTR_DAT_04bcb900;
  plVar16 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar7 = *puVar8;
    if (uVar7 != 0) {
      lVar12 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar12 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar16 = (long *)(*(long *)(lVar12 + (ulong)uVar7 * 8) + 0x20);
    }
  }
  if ((*plVar16 == 0) || (lVar12 = *(long *)(*plVar16 + 0x10), lVar12 == 0)) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x10);
  }
  plVar16 = (long *)(lVar12 + 0x78);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  uVar4 = *(ushort *)(param_1 + 0x48);
  local_44 = CONCAT22(local_44._2_2_,uVar4);
  if (uVar4 < 0x7f) {
    local_48[0] = (byte)uVar4 | 0x80;
    FUN_00197478(auStack_c0,local_48,1);
    uVar9 = FUN_00194070(param_2);
    if ((uVar9 & 1) == 0) goto LAB_00200b30;
LAB_00200b6c:
    local_44 = *(undefined4 *)(param_2 + 0x18);
    FUN_00197478(auStack_c0,&local_44,4);
    local_44 = 2;
    FUN_00197478(auStack_c0,&local_44,4);
    FUN_00197478(auStack_c0,param_4,4);
    if (local_b8 == '\0') {
      FUN_00197478(auStack_c0,param_5,8);
      if (local_b8 != '\0') {
        local_44 = 0x8001000a;
        FUN_0018aa70(auStack_f0,&local_44);
        goto LAB_00200c08;
      }
      puVar15 = *(undefined8 **)(param_2 + 0x98);
      plVar1 = (long *)(param_2 + 0x90);
      if (puVar15 == *(undefined8 **)(param_2 + 0xa0)) {
        uVar14 = (long)puVar15 - *plVar1;
        uVar9 = ((long)uVar14 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) goto LAB_00200dfc;
        uVar2 = (long)uVar14 >> 2;
        if ((ulong)((long)uVar14 >> 2) <= uVar9) {
          uVar2 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar14) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_00187df4(uVar2 << 3);
        }
        puVar15 = (undefined8 *)(lVar12 + ((long)uVar14 >> 3) * 8);
        puVar13 = puVar15 + 1;
        *puVar15 = param_3;
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
        *(undefined8 **)(param_2 + 0x98) = puVar13;
        *(ulong *)(param_2 + 0xa0) = lVar12 + uVar2 * 8;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_00187e4c();
          puVar13 = *(undefined8 **)(param_2 + 0x98);
        }
      }
      else {
        puVar13 = puVar15 + 1;
        *puVar15 = param_3;
        *(undefined8 **)(param_2 + 0x98) = puVar13;
      }
      if (puVar13 == *(undefined8 **)(param_2 + 0xa0)) {
        uVar14 = (long)puVar13 - *plVar1;
        uVar9 = ((long)uVar14 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) {
LAB_00200dfc:
          FUN_001f4808(plVar1);
                    /* WARNING: Does not return */
          pcVar5 = (code *)UndefinedInstructionException(0,0x200e04);
          (*pcVar5)();
        }
        uVar2 = (long)uVar14 >> 2;
        if ((ulong)((long)uVar14 >> 2) <= uVar9) {
          uVar2 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar14) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_00187df4(uVar2 << 3);
        }
        puVar15 = (undefined8 *)(lVar12 + ((long)uVar14 >> 3) * 8);
        puVar13 = puVar15 + 1;
        *puVar15 = param_6;
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
        *(undefined8 **)(param_2 + 0x98) = puVar13;
        *(ulong *)(param_2 + 0xa0) = lVar12 + uVar2 * 8;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_00187e4c();
        }
      }
      else {
        *puVar13 = param_6;
        *(undefined8 **)(param_2 + 0x98) = puVar13 + 1;
      }
      *(undefined **)(PTR_DAT_04bccb08 + 8) = PTR_LAB_04bccb18;
      if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
        (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = FUN_001f9220(param_1,param_2,auStack_c0);
        goto LAB_00200c24;
      }
      uVar7 = FUN_001f9220(param_1,param_2,auStack_c0);
    }
    else {
      local_44 = 0x8001000a;
      FUN_0018aa70(auStack_d8,&local_44);
      puVar11 = auStack_d8;
LAB_00200c08:
      FUN_00197bcc(param_2,puVar11);
      uVar7 = 1;
    }
  }
  else {
    local_48[0] = 0xff;
    FUN_00197478(auStack_c0,local_48,1);
    FUN_00197478(auStack_c0,&local_44,2);
    uVar9 = FUN_00194070(param_2);
    if ((uVar9 & 1) != 0) goto LAB_00200b6c;
LAB_00200b30:
    uVar7 = 0;
  }
  (**(code **)(*plVar16 + 0x20))(plVar16);
LAB_00200c24:
  FUN_001abdec(auStack_c0);
  return uVar7 & 1;
}


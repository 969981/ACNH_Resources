
undefined8 FUN_02197450(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  char cVar16;
  uint *puVar17;
  ulong uVar18;
  int *piVar19;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  long local_60;
  undefined1 local_58;
  byte local_57;
  byte local_34 [4];
  
  lVar14 = *(long *)PTR_DAT_04bb2208;
  puVar1 = (undefined1 *)(param_1 + 0x818);
  uVar7 = FUN_006bd550("AppFirstTalk",0);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar7);
  puVar11 = (uint *)FUN_021cb820(lVar14 + 0x660,&local_68);
  puVar2 = PTR_DAT_04bb6380;
  puVar5 = PTR_DAT_04bb6378;
  if (puVar11 != (uint *)0x0) {
    puVar15 = puVar1;
    if (*puVar11 != 0) {
      cVar16 = *PTR_DAT_04bb6378;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          uVar8 = *puVar11;
        }
        else {
          uVar8 = *(uint *)(puVar2 + 8);
          if (-1 < (int)uVar8) {
            if (((ushort *)((ulong)uVar8 + (long)puVar11) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar8 + (long)puVar11), uVar4 < 0x80)) {
              puVar15 = puVar1 + uVar4;
            }
            break;
          }
          if (uVar8 != 0xffffffff) break;
          uVar8 = *puVar11;
        }
        if ((uVar8 == 0) || (puVar17 = (uint *)(ulong)uVar8, puVar11 == puVar17)) break;
        lVar14 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar17)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar11 + (lVar14 - (long)puVar17);
        if (lVar14 == 0) break;
        uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar17));
        *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar19 = (int *)(lVar14 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_0219758c;
        }
        iVar10 = 0;
        if (*piVar19 != -1) {
          iVar10 = *piVar19;
        }
        *(int *)(puVar2 + 8) = iVar10;
        if (*puVar11 == 0) break;
      } while( true );
    }
LAB_0219758c:
    *puVar15 = 0;
  }
  FUN_0252d11c(local_34);
  if (((local_34[0] < 8) && (*(char *)(param_1 + 0xaf9) != '\0')) &&
     (lVar14 = FUN_0265c2a0((long)*(char *)(param_1 + 0xaf8)), lVar14 != 0)) {
    local_58 = 1;
    local_60 = lVar14;
    if ((*(long **)(lVar14 + 0x28) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar14 + 0x28), puVar12 == (undefined8 *)0x0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = (**(code **)*puVar12)();
    }
    local_57 = bVar6 & 1;
    local_68 = PTR_DAT_04bb67a0 + 0x10;
    lVar3 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8);
    if ((*(char *)(lVar3 + 0x12678) == '\x04') && (*(char *)(lVar3 + 0x1267a) == '\0')) {
      if (7 < local_34[0]) {
        local_34[0] = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,local_34[0]);
      lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
      if (lVar13 != 0) {
        if ((*(long **)(lVar13 + 0x17bb0) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar13 + 0x17bb0), puVar12 == (undefined8 *)0x0)) {
          uVar8 = 1;
        }
        else {
          uVar8 = (**(code **)*puVar12)();
          uVar8 = uVar8 ^ 1;
        }
        uVar9 = FUN_026b318c(lVar3,*(long *)(lVar13 + 0x17b98) + *(long *)(lVar13 + 0x17b90) + 0x1c)
        ;
        if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x17bb0) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x17bb0) + 8),
           puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)();
        }
        puVar5 = PTR_DAT_04bb2020;
        if (-1 < (int)uVar9) {
          lVar3 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 4;
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_70 = "FirstMeetGreetAtThisVillage";
          lVar13 = lVar3 + (ulong)uVar9 * 0x5f0;
          if (7 < uVar9) {
            lVar13 = lVar3;
          }
          lVar13 = lVar13 + 0x38;
          local_78 = puVar2;
          iVar10 = FUN_02746e10(lVar13,&local_78);
          if (iVar10 != 0) {
            pcStack_80 = "FirstMeetGreetAtThisVillageToday";
            local_88 = puVar2;
            iVar10 = FUN_02746e10(lVar13,&local_88);
            if (iVar10 == 0) {
              local_98 = puVar5 + 0x10;
              pcStack_90 = "AppF_MoveinGiftOccured";
              iVar10 = FUN_02746e10(lVar13,&local_98);
              if (iVar10 == 0) {
                local_78 = (undefined *)
                           FUN_0272eca4(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x12674,1
                                       );
                iVar10 = FUN_00a82474(*(long *)PTR_DAT_04bb32e8 + 0x4060,&local_78);
                if (iVar10 < 8) {
                  local_78 = puVar5 + 0x10;
                  pcStack_70 = "AppFirstTalk";
                  FUN_02196720(puVar1,&local_78,1);
                  FUN_02640184(&local_68);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    if ((((bVar6 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  return 0;
}


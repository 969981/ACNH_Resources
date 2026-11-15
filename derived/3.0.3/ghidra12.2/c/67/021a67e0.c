
undefined8 FUN_021a67e0(long param_1,byte *param_2)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined *puVar14;
  char cVar15;
  uint *puVar16;
  int *piVar17;
  undefined1 local_38 [7];
  undefined1 uStack_31;
  byte local_18 [4];
  undefined4 local_14;
  
  uVar7 = *(uint *)(param_1 + 0x92c0);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  puVar14 = &DAT_053fe348 + (ulong)uVar7 * 0xba0;
  lVar11 = *(long *)PTR_DAT_04bb2208;
  if (9 < uVar7) {
    puVar14 = &DAT_053fe348;
  }
  local_14 = FUN_006bd550("PlayerBirthdayCall",0);
  puVar8 = (uint *)FUN_021cb820(lVar11 + 0x660,&local_14);
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb6378;
  if (puVar8 != (uint *)0x0) {
    pcVar12 = puVar14 + 0x818;
    if (*puVar8 != 0) {
      cVar15 = *PTR_DAT_04bb6378;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar7 = *puVar8;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar7) {
            if (((ushort *)((ulong)uVar7 + (long)puVar8) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar7 + (long)puVar8), uVar2 < 0x80)) {
              pcVar12 = pcVar12 + uVar2;
            }
            break;
          }
          if (uVar7 != 0xffffffff) break;
          uVar7 = *puVar8;
        }
        if ((uVar7 == 0) || (puVar16 = (uint *)(ulong)uVar7, puVar8 == puVar16)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar8 + (lVar11 - (long)puVar16);
        if (lVar11 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar9 == 0) break;
        piVar17 = (int *)(lVar11 + 4);
        while (piVar17[-1] != 0x54706054) {
          piVar17 = piVar17 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_021a6950;
        }
        iVar1 = 0;
        if (*piVar17 != -1) {
          iVar1 = *piVar17;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_021a6950:
    if ((*pcVar12 != '\0') &&
       (uVar13 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060),
       '\x04' < (char)((ulong)uVar13 >> 0x20))) {
      uStack_31 = (undefined1)((ulong)uVar13 >> 0x38);
      local_38 = (undefined1  [7])CONCAT16(0,CONCAT24(5,(int)uVar13));
      if (*(long *)PTR_DAT_04bb32f0 == 0) {
        return 0;
      }
      uVar9 = FUN_008828a0(*(long *)PTR_DAT_04bb32f0,local_38,param_2);
      if ((uVar9 & 1) != 0) {
        local_18[0] = *param_2;
        if (7 < local_18[0]) {
          local_18[0] = 0xff;
        }
        lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_18,1);
        if (lVar11 != 0) {
          if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
             (puVar10 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar10 == (undefined8 *)0x0)) {
            uVar7 = 1;
          }
          else {
            uVar7 = (**(code **)*puVar10)();
            uVar7 = uVar7 ^ 1;
          }
          uVar6 = local_38._0_2_;
          sVar3 = *(short *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x36908);
          if ((((uVar7 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
          if (sVar3 != uVar6) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


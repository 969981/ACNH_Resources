
void FUN_021f5c40(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulong uVar10;
  char cVar11;
  undefined2 uVar12;
  uint *puVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined4 local_34;
  
  local_3d = 0;
  local_48 = 8;
  local_44[0] = 0;
  local_50 = local_44;
  local_58 = PTR_DAT_04bb3768 + 0x10;
  lVar7 = FUN_0265c2a0(*param_2);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar8)();
      uVar6 = uVar6 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
    FUN_038d1270(&local_58,"-----");
    uVar10 = (ulong)*pbVar1;
    if (uVar10 < 0x23) {
      FUN_038d1270(&local_58,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar10 * 8 + 0xb0),
                   pbVar1[1]);
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    uVar15 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(local_58 + 0x18))(&local_58);
    local_34 = FUN_006bd550(local_50,0);
    puVar9 = (uint *)FUN_0079e770(uVar15,&local_34);
    puVar5 = PTR_DAT_04bb40b8;
    puVar4 = PTR_DAT_04bb40b0;
    if (puVar9 != (uint *)0x0) {
      if (*puVar9 == 0) {
LAB_021f5e7c:
        uVar12 = 0;
      }
      else {
        cVar11 = *PTR_DAT_04bb40b0;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar5 + 0x34);
            if (-1 < (int)uVar6) {
              if ((undefined2 *)((ulong)uVar6 + (long)puVar9) == (undefined2 *)0x0)
              goto LAB_021f5e7c;
              uVar12 = *(undefined2 *)((ulong)uVar6 + (long)puVar9);
              goto LAB_021f5e80;
            }
            if (uVar6 != 0xffffffff) goto LAB_021f5e7c;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          uVar12 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_021f5e80;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
          if (lVar7 == 0) goto LAB_021f5e7c;
          uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(puVar5 + 0x34) = 0xfffffffe;
          uVar12 = 0;
          if (uVar10 == 0) goto LAB_021f5e80;
          piVar14 = (int *)(lVar7 + 4);
          while (piVar14[-1] != 0x71bf253b) {
            piVar14 = piVar14 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              uVar12 = 0;
              goto LAB_021f5e80;
            }
          }
          iVar2 = 0;
          if (*piVar14 != -1) {
            iVar2 = *piVar14;
          }
          *(int *)(puVar5 + 0x34) = iVar2;
        } while (*puVar9 != 0);
        uVar12 = 0;
      }
LAB_021f5e80:
      *(undefined2 *)param_1 = uVar12;
      *(undefined2 *)((long)param_1 + 2) = 0;
      param_1[1] = 0;
      FUN_0277d4ac(param_1);
      return;
    }
  }
  uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar3;
  return;
}


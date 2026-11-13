
void FUN_01434210(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  char cVar13;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_90 = 0;
  uStack_94 = *(undefined4 *)(param_1 + 0x2cc);
  local_a0 = PTR_DAT_04bc0510 + 0x10;
  local_98 = *(undefined4 *)(param_1 + 0x2c8);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar3 == 0) {
LAB_014342e0:
    puVar12 = (uint *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_014342e0;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1 + 0x2c8);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar6) goto LAB_014342e0;
    puVar12 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
  }
  puVar3 = PTR_DAT_04bbfe90;
  if (*(int *)(param_1 + 0x2d4) == 1) {
    bVar4 = 1;
    goto LAB_01434504;
  }
  if (*(int *)(param_1 + 0x2d4) == 0) {
    uVar6 = *(uint *)(param_1 + 0x2d0);
    if (uVar6 < 3) {
LAB_0143430c:
      if ((puVar12 != (uint *)0x0) && (uVar6 = *puVar12, uVar6 != 0)) {
        cVar13 = *PTR_DAT_04bbfe88;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            memset(puVar3,0xff,0x1ac);
            uVar6 = *puVar12;
          }
          else {
            uVar1 = *(uint *)(puVar3 + 0x168);
            if (-1 < (int)uVar1) {
              if ((char *)((ulong)uVar1 + (long)puVar12) == (char *)0x0) break;
              bVar4 = *(char *)((ulong)uVar1 + (long)puVar12) != '\0';
              goto LAB_01434504;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar2 = (uint *)(ulong)uVar6;
          bVar4 = 0;
          if ((puVar2 == (uint *)0x0) || (bVar4 = 0, puVar12 == puVar2)) goto LAB_01434504;
          lVar10 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar2)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar12 + (lVar10 - (long)puVar2);
          if (lVar10 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar2));
          *(undefined4 *)(puVar3 + 0x168) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar9 = (int *)(lVar10 + 4);
          while (piVar9[-1] != -0x279de766) {
            piVar9 = piVar9 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01434500;
          }
          bVar4 = 0;
          iVar7 = 0;
          if (*piVar9 != -1) {
            iVar7 = *piVar9;
          }
          *(int *)(puVar3 + 0x168) = iVar7;
          uVar6 = *puVar12;
          if (uVar6 == 0) goto LAB_01434504;
        } while( true );
      }
    }
    else if (uVar6 == 3) {
      local_70 = 0;
      local_80 = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2c8);
      uStack_7c = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2cc);
      local_88 = PTR_DAT_04bb2010 + 0x10;
      lVar10 = *(long *)PTR_DAT_04bb2720;
      if (lVar10 == 0) {
        puVar11 = &DAT_055c04a0;
      }
      else {
        puVar11 = &DAT_055c04a0;
        if (*(long *)(lVar10 + 0x330) != 0) {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar7 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
      }
      local_6c = *(undefined4 *)(puVar11 + 7);
      local_68 = FUN_017baf44();
      local_68 = local_68 & 1;
      local_78 = PTR_DAT_04bb3140 + 0x10;
      uVar8 = FUN_014fd6bc(&local_78,*(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0));
      if ((uVar8 & 1) != 0) {
        bVar4 = FUN_014fd19c(&local_78,&local_88,*(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0)
                            );
        goto LAB_01434504;
      }
    }
    else if (uVar6 == 4) goto LAB_0143430c;
  }
LAB_01434500:
  bVar4 = 0;
LAB_01434504:
  if (*(int *)(param_1 + 0x2d0) != 3) {
    local_70 = 0;
    lVar10 = *(long *)PTR_DAT_04bb2720;
    if (lVar10 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar7 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar11 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_78 = PTR_DAT_04bb3140 + 0x10;
    uVar8 = FUN_014fd6bc(&local_78,*(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0));
    if ((uVar8 & 1) != 0) {
      local_98 = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2c8);
      uStack_94 = *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2cc);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      bVar5 = FUN_0154df90(param_1 + 0x2c8);
      if (((bVar4 | bVar5) & 1) != 0) {
        FUN_014fd424(&local_78,bVar4 & bVar5 & 1,&local_a0,
                     *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0x2d0));
      }
    }
  }
  *(byte *)(param_1 + 0x308) = bVar4 & 1;
  *(byte *)(param_1 + 0x309) = bVar4 & 1;
  return;
}


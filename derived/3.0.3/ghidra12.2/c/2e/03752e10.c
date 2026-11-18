
void FUN_03752e10(ulong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  uint *puVar10;
  char cVar11;
  ushort uVar12;
  int *piVar13;
  ulong uVar14;
  undefined **local_68;
  undefined2 *puStack_60;
  undefined2 local_44 [2];
  uint local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  uint local_38;
  int local_34;
  
  if ((((uint)param_1 ^ 0xffffffff) & 0xffff) != 0) {
    uVar14 = param_1 & 0xffffffff;
    bVar8 = param_2 == 0;
    bVar1 = !bVar8;
    local_38 = (uint)bVar8;
    local_34 = param_2;
    FUN_03751f30(&local_68,param_1,0,0);
    FUN_03752cb0(&local_68,&local_38,bVar1,(uint)bVar8);
    FUN_03751f30(&local_68,uVar14,1,0);
    FUN_03752cb0(&local_68,&local_38,bVar1,bVar8);
    FUN_03751f30(&local_68,uVar14,2,0);
    FUN_03752cb0(&local_68,&local_38,bVar1,bVar8);
    FUN_03751f30(&local_68,uVar14,0,1);
    FUN_03752cb0(&local_68,&local_38,bVar1,bVar8);
    FUN_03751f30(&local_68,uVar14,1,1);
    FUN_03752cb0(&local_68,&local_38,bVar1,bVar8);
    puVar7 = PTR_DAT_04bcacd0;
    puVar6 = PTR_DAT_04bcacc8;
    lVar9 = *(long *)PTR_DAT_04bb4958;
    uVar4 = ((uint)param_1 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x418);
    if ((uVar4 < *(uint *)(lVar9 + 0x3f8)) &&
       (puVar10 = *(uint **)(*(long *)(lVar9 + 0x400) + (long)(int)uVar4 * 8),
       puVar10 != (uint *)0x0)) {
      uVar4 = *puVar10;
      if (uVar4 != 0) {
        cVar11 = *PTR_DAT_04bcacc8;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            uVar4 = *puVar10;
          }
          else {
            uVar3 = *(uint *)puVar7;
            if (-1 < (int)uVar3) {
              if ((ushort *)((ulong)uVar3 + (long)puVar10) != (ushort *)0x0) {
                uVar12 = *(ushort *)((ulong)uVar3 + (long)puVar10);
                goto LAB_03753050;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar4;
          uVar12 = 0xffff;
          if ((puVar5 == (uint *)0x0) || (uVar12 = 0xffff, puVar10 == puVar5)) goto LAB_03753050;
          lVar9 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
          if (lVar9 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != -0x59d9ee3) {
            piVar13 = piVar13 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_0375304c;
          }
          iVar2 = 0;
          if (*piVar13 != -1) {
            iVar2 = *piVar13;
          }
          *(int *)puVar7 = iVar2;
          uVar4 = *puVar10;
          if (uVar4 == 0) break;
        } while( true );
      }
LAB_0375304c:
      uVar12 = 0xffff;
LAB_03753050:
      local_68 = (undefined **)(ulong)uVar12;
      FUN_0277d4ac(&local_68);
    }
    else {
      local_68 = *(undefined ***)PTR_DAT_04bb37e0;
    }
    FUN_03752cb0(&local_68,&local_38,bVar1,param_2 == 0);
    if (*(long *)PTR_DAT_04bb4970 != 0) {
      local_3b = param_2 == 0;
      local_44[0] = (undefined2)param_1;
      local_40 = local_38;
      puStack_60 = local_44;
      local_68 = &PTR_LAB_04b468f8;
      local_3c = bVar1;
      FUN_036f09c0(*(long *)PTR_DAT_04bb4970,&local_68);
    }
  }
  return;
}



int FUN_027445c0(ushort *param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb2208;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_38 = FUN_006bd550(param_2[1],0);
  lVar7 = FUN_027457e0(lVar7 + 0xca0,&local_38);
  iVar4 = 0;
  if (lVar7 != 0) {
    lVar7 = *(long *)puVar2;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_34 = FUN_006bd550(param_2[1],0);
    puVar5 = (uint *)FUN_027457e0(lVar7 + 0xca0,&local_34);
    puVar3 = PTR_DAT_04bb63a8;
    puVar2 = PTR_DAT_04bb63a0;
    if (puVar5 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      if (*puVar5 != 0) {
        cVar8 = *PTR_DAT_04bb63a0;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            uVar6 = *puVar5;
          }
          else {
            uVar6 = *(uint *)(puVar3 + 8);
            if (-1 < (int)uVar6) {
              if (((ushort *)((ulong)uVar6 + (long)puVar5) != (ushort *)0x0) &&
                 (uVar1 = *(ushort *)((ulong)uVar6 + (long)puVar5), uVar1 < 0x80)) {
                param_1 = param_1 + uVar1;
              }
              break;
            }
            if (uVar6 != 0xffffffff) break;
            uVar6 = *puVar5;
          }
          if ((uVar6 == 0) || (puVar9 = (uint *)(ulong)uVar6, puVar5 == puVar9)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar5 + (lVar7 - (long)puVar9);
          if (lVar7 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
          *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_02744750;
          }
          iVar4 = 0;
          if (*piVar11 != -1) {
            iVar4 = *piVar11;
          }
          *(int *)(puVar3 + 8) = iVar4;
          if (*puVar5 == 0) break;
        } while( true );
      }
LAB_02744750:
      uVar6 = (uint)*param_1;
    }
    iVar4 = (uVar6 & 1) + (uVar6 >> 0xf) + (uVar6 >> 1 & 1) + (uVar6 >> 2 & 1) + (uVar6 >> 3 & 1) +
            (uVar6 >> 4 & 1) + (uVar6 >> 5 & 1) + (uVar6 >> 6 & 1) + (uVar6 >> 7 & 1) +
            (uVar6 >> 8 & 1) + (uVar6 >> 9 & 1) + (uVar6 >> 10 & 1) + (uVar6 >> 0xb & 1) +
            (uVar6 >> 0xc & 1) + (uVar6 >> 0xd & 1) + (uVar6 >> 0xe & 1);
  }
  return iVar4;
}


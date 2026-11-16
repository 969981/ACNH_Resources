
void FUN_027475c0(byte *param_1,long *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  char cVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 local_34;
  
  lVar9 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar7 = (uint *)FUN_020f3140(lVar9 + 0x220,&local_34);
  puVar6 = PTR_DAT_04bb6360;
  puVar5 = PTR_DAT_04bb6358;
  if (puVar7 == (uint *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar7;
    pbVar10 = param_1;
    if (uVar8 != 0) {
      cVar11 = *PTR_DAT_04bb6358;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar8 = *puVar7;
        }
        else {
          uVar2 = *(uint *)puVar6;
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 < 0x100)) {
              pbVar10 = param_1 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)uVar8;
        if ((puVar4 == (uint *)0x0) || (puVar7 == puVar4)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + (lVar9 - (long)puVar4);
        if (lVar9 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar13 = (int *)(lVar9 + 4);
        while (piVar13[-1] != 0x54706054) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_027476fc;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)puVar6 = iVar1;
        uVar8 = *puVar7;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_027476fc:
    uVar8 = (uint)*pbVar10;
  }
  FUN_02747170(param_1,param_2,uVar8 + param_3);
  return;
}


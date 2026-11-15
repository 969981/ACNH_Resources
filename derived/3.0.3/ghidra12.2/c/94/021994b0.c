
void FUN_021994b0(long param_1,long *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  byte *pbVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 local_34;
  
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_021cb820(lVar7 + 0x660,&local_34);
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb6378;
  if (puVar6 != (uint *)0x0) {
    pbVar8 = (byte *)(param_1 + 0x818);
    if (*puVar6 != 0) {
      cVar9 = *PTR_DAT_04bb6378;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar6;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6), uVar3 < 0x80)) {
              pbVar8 = pbVar8 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar6;
        }
        if ((uVar2 == 0) || (puVar10 = (uint *)(ulong)uVar2, puVar6 == puVar10)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + (lVar7 - (long)puVar10);
        if (lVar7 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar7 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02199618;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_02199618:
    uVar2 = (uint)*pbVar8 + param_3;
    if (0xff < uVar2) {
      uVar2 = ~(param_3 >> 0x1f);
    }
    *pbVar8 = (byte)uVar2;
  }
  return;
}


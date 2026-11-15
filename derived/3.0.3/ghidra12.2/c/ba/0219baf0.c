
void FUN_0219baf0(long param_1,undefined4 param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 local_34;
  byte local_14 [4];
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  local_34 = FUN_006bd550("ApproachUpdateStop",0);
  puVar6 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_34);
  puVar4 = PTR_DAT_04bb6380;
  puVar3 = PTR_DAT_04bb6378;
  if (puVar6 != (uint *)0x0) {
    pcVar9 = (char *)(param_1 + 0x818);
    if (*puVar6 != 0) {
      cVar11 = *PTR_DAT_04bb6378;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar1 = *puVar6;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar1) {
            if (((ushort *)((ulong)uVar1 + (long)puVar6) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar1 + (long)puVar6), uVar2 < 0x80)) {
              pcVar9 = pcVar9 + uVar2;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
          uVar1 = *puVar6;
        }
        if ((uVar1 == 0) || (puVar12 = (uint *)(ulong)uVar1, puVar6 == puVar12)) break;
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
        if (lVar8 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar14 = (int *)(lVar8 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0219bc48;
        }
        iVar5 = 0;
        if (*piVar14 != -1) {
          iVar5 = *piVar14;
        }
        *(int *)(puVar4 + 8) = iVar5;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0219bc48:
    if (*pcVar9 != '\0') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x4e0) = 0;
  FUN_0252d11c(local_14);
  if ((((local_14[0] < 8) && (uVar7 = FUN_00a74b78(local_14), (int)uVar7 == 0x13)) &&
      (DAT_05454248 < 0x546)) &&
     (uVar1 = *(int *)(param_1 + 0x4cc) + 1, *(uint *)(param_1 + 0x4cc) = uVar1, 0x545 < uVar1)) {
    iVar5 = FUN_0219782c(uVar7,2,0,param_2);
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    uVar1 = iVar5 + (uint)*(byte *)(param_1 + 0x4c8);
    uVar10 = uVar1;
    if (0x1e < uVar1) {
      uVar10 = 0x1f;
    }
    *(byte *)(param_1 + 0x4c8) = (byte)uVar10 & ((byte)((int)uVar1 >> 0x1f) ^ 0xff);
    *(bool *)(param_1 + 0x4e1) = 0x1f < (int)uVar1;
  }
  return;
}



uint FUN_001f2d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  char cVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  char local_106c [4100];
  ulong local_68;
  
  uVar13 = 0;
  lVar14 = 0;
  local_68 = 0;
  puVar7 = *(undefined8 **)(param_1 + 0x148);
  uVar6 = 0x1000;
  uVar10 = puVar7[8];
  pcVar5 = local_106c;
  if (uVar10 == 0) goto LAB_001f2de0;
LAB_001f2db4:
  local_68 = uVar10;
  if (uVar6 <= uVar10) {
    local_68 = uVar6;
  }
  FUN_0018a674(puVar7 + 2,pcVar5);
  FUN_0018a6fc(puVar7 + 2,local_68);
  do {
    if (local_68 == 0) break;
    lVar14 = local_68 + lVar14;
    local_106c[lVar14] = '\0';
    if (local_106c[0] != '\0') {
      lVar8 = 0;
      cVar9 = local_106c[0];
      do {
        cVar11 = '\r';
        if (cVar9 == '\r') {
          cVar9 = local_106c[lVar8 + 1];
          if (cVar9 != '\n') {
LAB_001f2e58:
            cVar11 = '\n';
            goto LAB_001f2e5c;
          }
          if (local_106c[lVar8 + 2] == '\r') {
            cVar9 = '\0';
            if (local_106c[lVar8 + 3] != '\0') {
              cVar9 = local_106c[lVar8 + 3];
            }
            goto LAB_001f2e58;
          }
          if (local_106c[lVar8 + 2] == '\r') goto LAB_001f2e90;
        }
        else {
LAB_001f2e5c:
          if (cVar11 == cVar9) {
LAB_001f2e90:
            if (-1 < lVar8) {
              uVar12 = *(undefined8 *)(param_1 + 0x150);
              sVar4 = strnlen(local_106c,0x1000);
              uVar3 = FUN_001f31d0(uVar12,local_106c,sVar4,param_2,param_3,param_4);
              goto LAB_001f2ec8;
            }
            break;
          }
        }
        cVar9 = local_106c[lVar8 + 1];
        if ((cVar9 == '\0') || (bVar1 = lVar8 == -2, lVar8 = lVar8 + 1, bVar1)) break;
      } while( true );
    }
    do {
      if (0x270 < (uint)(uVar13 >> 3)) goto LAB_001f2ec4;
      FUN_001878b0(0x10);
      uVar13 = (ulong)((int)uVar13 + 0x10);
      puVar7 = *(undefined8 **)(param_1 + 0x148);
      pcVar5 = local_106c + lVar14;
      uVar6 = 0x1000 - lVar14;
      uVar10 = puVar7[8];
      if (uVar10 != 0) goto LAB_001f2db4;
LAB_001f2de0:
      iVar2 = FUN_001430c4(*puVar7,pcVar5,uVar6,&local_68);
    } while (iVar2 == 0x51);
  } while (iVar2 == 0);
LAB_001f2ec4:
  uVar3 = 0;
LAB_001f2ec8:
  return uVar3 & 1;
}


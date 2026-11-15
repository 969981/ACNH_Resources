
undefined8 FUN_021be8c0(uint *param_1,long *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 local_24;
  
  uVar2 = *param_1;
  if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    lVar8 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = FUN_006bd550(param_2[1],0);
    puVar6 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_24);
    puVar5 = PTR_DAT_04bb6380;
    puVar4 = PTR_DAT_04bb6378;
    if (puVar6 != (uint *)0x0) {
      puVar9 = &DAT_053feb60 + (ulong)uVar2 * 0xba0;
      if (*puVar6 != 0) {
        cVar11 = *PTR_DAT_04bb6378;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
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
              if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
                uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6);
                if (0xfe < param_3) {
                  param_3 = 0xff;
                }
                uVar10 = (undefined1)param_3;
                if (uVar3 < 0x80) {
                  puVar9 = puVar9 + uVar3;
                }
                goto LAB_021bea68;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
            uVar2 = *puVar6;
          }
          if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar6 == puVar12)) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
          if (lVar8 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar14 = (int *)(lVar8 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_021bea5c;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar5 + 8) = iVar1;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_021bea5c:
      if (0xfe < param_3) {
        param_3 = 0xff;
      }
      uVar10 = (undefined1)param_3;
LAB_021bea68:
      *puVar9 = uVar10;
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


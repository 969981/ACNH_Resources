
void FUN_03a46800(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  char cVar12;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_0390c400(1,1,0x40,0x10,1,1,0);
  uVar3 = *param_2;
  lVar6 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar6 = (*DAT_04c61fd0)();
  }
  uVar7 = 0;
  lVar6 = lVar6 + (ulong)uVar3;
  do {
    iVar8 = 0x11;
    if (3 < uVar7) {
      iVar8 = -4;
    }
    uVar3 = iVar8 + (int)uVar7;
    uVar10 = uVar3 - 7;
    if (uVar3 < 7) {
      uVar10 = uVar3;
    }
    if (2 < uVar10) {
      uVar10 = uVar10 - 3;
    }
    if ((uVar7 < 4) || (1 < uVar10)) {
      lVar9 = 0;
      do {
        *(undefined8 *)(lVar6 + lVar9) = 0;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0x40);
    }
    else {
      uVar11 = 0;
      do {
        uVar10 = (uint)uVar11;
        if (uVar11 < 0x20) {
          if (0x14 < uVar11) {
            uVar10 = uVar10 - 0x15;
          }
          if (6 < uVar10) {
            uVar10 = uVar10 - 7;
          }
          uVar1 = uVar10;
          if (2 < uVar10) {
            uVar1 = uVar10 - 3;
          }
          if (uVar1 < 2) {
            bVar5 = true;
            if (uVar10 < 3 && 6 < uVar3) {
              bVar5 = 0x14 < uVar11;
            }
            goto LAB_03a468dc;
          }
          cVar12 = '\0';
        }
        else {
          uVar4 = uVar10 - 0x35;
          cVar12 = '\0';
          uVar1 = uVar4;
          if (0xffffffea < uVar4) {
            uVar1 = uVar10 - 0x20;
          }
          uVar10 = uVar1;
          if (6 < uVar1) {
            uVar10 = uVar1 - 7;
          }
          uVar2 = uVar10 - 3;
          if (uVar10 < 3) {
            uVar2 = uVar10;
          }
          if (((0xffffffea < uVar4) && (uVar10 < 3)) && (uVar2 < 2)) {
            bVar5 = (uVar2 != 0 || uVar3 < 7) || 6 < uVar1;
LAB_03a468dc:
            cVar12 = '\x01';
            if (!bVar5) {
              cVar12 = '\x02';
            }
          }
        }
        *(char *)(lVar6 + uVar11) = cVar12 * '\x7f';
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x40);
    }
    uVar7 = uVar7 + 1;
    lVar6 = lVar6 + 0x40;
    if (uVar7 == 0x10) {
      local_58 = *param_2;
      uStack_54 = param_2[1];
      local_50 = *(undefined8 *)(param_2 + 2);
      uStack_48 = *(undefined8 *)(param_2 + 4);
      FUN_0390c314(param_1,&local_58,param_3,1,0x40,0x10,0);
      return;
    }
  } while( true );
}


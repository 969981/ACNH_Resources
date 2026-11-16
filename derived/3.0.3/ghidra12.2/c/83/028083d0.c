
void FUN_028083d0(byte *param_1,uint *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined *local_60;
  char *pcStack_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_24;
  
  local_44 = *param_2;
  uVar2 = FUN_02807cc4(param_1,&local_44);
  if (((uVar2 & 1) != 0) && (local_48 = *param_2, local_48 != *param_1)) {
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      if (local_48 == param_1[uVar4 + 1]) goto LAB_02808458;
      if (uVar4 == 0xfe) goto LAB_02808460;
      uVar1 = uVar4 + 2;
    } while (local_48 != param_1[uVar4 + 2]);
    uVar4 = uVar4 + 1;
LAB_02808458:
    if (0xfe < uVar4) {
LAB_02808460:
      lVar5 = 0;
      do {
        if (param_1[lVar5] == 0) {
LAB_0280848c:
          param_1[lVar5] = (byte)*param_2;
          (param_1 + lVar5)[0x108] = 1;
          local_4c = *param_2;
          if (param_1[0x100] == 0) {
            lVar5 = 0;
          }
          else if (param_1[0x101] == 0) {
            lVar5 = 1;
          }
          else if (param_1[0x102] == 0) {
            lVar5 = 2;
          }
          else if (param_1[0x103] == 0) {
            lVar5 = 3;
          }
          else if (param_1[0x104] == 0) {
            lVar5 = 4;
          }
          else if (param_1[0x105] == 0) {
            lVar5 = 5;
          }
          else if (param_1[0x106] == 0) {
            lVar5 = 6;
          }
          else {
            if (param_1[0x107] != 0) goto LAB_02808530;
            lVar5 = 7;
          }
          param_1[lVar5 + 0x100] = (byte)local_4c;
LAB_02808530:
          if (7 < *param_3) {
            return;
          }
          uVar7 = 0;
          iVar6 = 0;
          local_60 = PTR_DAT_04bb2020 + 0x10;
          pcStack_58 = "FillReactionList";
          do {
            local_24 = uVar7;
            uVar2 = FUN_02807cc4(uVar2,&local_24);
            if ((uVar2 & 1) != 0) {
              if (uVar7 == *param_1) {
                uVar3 = 1;
              }
              else {
                uVar1 = 0;
                do {
                  uVar4 = uVar1;
                  if (uVar7 == param_1[uVar4 + 1]) goto LAB_02808610;
                  if (uVar7 == param_1[uVar4 + 2]) {
                    uVar4 = uVar4 + 1;
                    goto LAB_02808610;
                  }
                  if (uVar7 == param_1[uVar4 + 3]) {
                    uVar4 = uVar4 + 2;
                    goto LAB_02808610;
                  }
                  if (uVar4 == 0xfc) {
                    uVar4 = 0xff;
                    goto LAB_02808610;
                  }
                  uVar1 = uVar4 + 4;
                } while (uVar7 != param_1[uVar4 + 4]);
                uVar4 = uVar4 + 3;
LAB_02808610:
                uVar3 = (uint)(uVar4 < 0xff);
              }
              iVar6 = iVar6 + uVar3;
            }
            uVar7 = uVar7 + 1;
            if (uVar7 == 0x79) {
              FUN_02799370(param_3,&local_60,iVar6);
              return;
            }
          } while( true );
        }
        if (param_1[lVar5 + 1] == 0) {
          lVar5 = lVar5 + 1;
          goto LAB_0280848c;
        }
        lVar5 = lVar5 + 2;
      } while (lVar5 != 0x100);
    }
  }
  return;
}


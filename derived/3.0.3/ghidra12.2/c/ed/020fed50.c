
undefined4 FUN_020fed50(uint *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  
  if (param_3 == '\x01') {
    switch(*param_2) {
    case 0:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7ad4 & 0xffffffff;
          if (-1 < (int)DAT_053e7ad4) goto LAB_02100ec8;
          if ((int)DAT_053e7ad4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ad4 = CONCAT44(DAT_053e7ad4._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x2d61dfb2) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ad4 = CONCAT44(DAT_053e7ad4._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 1:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7a7c._4_4_;
          if (-1 < (long)DAT_053e7a7c) goto LAB_02100ec8;
          if (DAT_053e7a7c._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a7c = CONCAT44(0xfffffffe,(int)DAT_053e7a7c);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x529eeeae) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a7c = CONCAT44(iVar1,(int)DAT_053e7a7c);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 2:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7a8c & 0xffffffff;
          if (-1 < (int)DAT_053e7a8c) goto LAB_02100ec8;
          if ((int)DAT_053e7a8c != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a8c = CONCAT44(DAT_053e7a8c._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x637704f5) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a8c = CONCAT44(DAT_053e7a8c._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 3:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7ac4._4_4_;
          if (-1 < (long)DAT_053e7ac4) goto LAB_02100ec8;
          if (DAT_053e7ac4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ac4 = CONCAT44(0xfffffffe,(int)DAT_053e7ac4);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x75c905d8) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ac4 = CONCAT44(iVar1,(int)DAT_053e7ac4);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 4:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7af4._4_4_;
          if (-1 < (long)DAT_053e7af4) goto LAB_02100ec8;
          if (DAT_053e7af4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7af4 = CONCAT44(0xfffffffe,(int)DAT_053e7af4);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x52fdf18d) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7af4 = CONCAT44(iVar1,(int)DAT_053e7af4);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 5:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7aec & 0xffffffff;
          if (-1 < (int)DAT_053e7aec) goto LAB_02100ec8;
          if ((int)DAT_053e7aec != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7aec = CONCAT44(DAT_053e7aec._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x29a68363) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7aec = CONCAT44(DAT_053e7aec._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 6:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7aa4 & 0xffffffff;
          if (-1 < (int)DAT_053e7aa4) goto LAB_02100ec8;
          if ((int)DAT_053e7aa4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7aa4 = CONCAT44(DAT_053e7aa4._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x719a08b3) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7aa4 = CONCAT44(DAT_053e7aa4._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 7:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7aac._4_4_;
          if (-1 < (long)DAT_053e7aac) goto LAB_02100ec8;
          if (DAT_053e7aac._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7aac = CONCAT44(0xfffffffe,(int)DAT_053e7aac);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x1dbf289) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7aac = CONCAT44(iVar1,(int)DAT_053e7aac);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 8:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7a94._4_4_;
          if (-1 < (long)DAT_053e7a94) goto LAB_02100ec8;
          if (DAT_053e7a94._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a94 = CONCAT44(0xfffffffe,(int)DAT_053e7a94);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x6248e0a) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a94 = CONCAT44(iVar1,(int)DAT_053e7a94);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 9:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7abc & 0xffffffff;
          if (-1 < (int)DAT_053e7abc) goto LAB_02100ec8;
          if ((int)DAT_053e7abc != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7abc = CONCAT44(DAT_053e7abc._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x1d026757) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7abc = CONCAT44(DAT_053e7abc._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 10:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7adc._4_4_;
          if (-1 < (long)DAT_053e7adc) goto LAB_02100ec8;
          if (DAT_053e7adc._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7adc = CONCAT44(0xfffffffe,(int)DAT_053e7adc);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x17071043) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7adc = CONCAT44(iVar1,(int)DAT_053e7adc);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else if (param_3 == '\0') {
    switch(*param_2) {
    case 0:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7acc._4_4_;
          if (-1 < (long)DAT_053e7acc) {
LAB_02100ec8:
            uVar5 = 0;
            if ((undefined4 *)(uVar6 + (long)param_1) != (undefined4 *)0x0) {
              uVar5 = *(undefined4 *)(uVar6 + (long)param_1);
            }
            return uVar5;
          }
          if (DAT_053e7acc._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7acc = CONCAT44(0xfffffffe,(int)DAT_053e7acc);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x1001f602) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7acc = CONCAT44(iVar1,(int)DAT_053e7acc);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 1:
      uVar3 = *param_1;
      if (uVar3 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          cVar7 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
          uVar3 = *param_1;
        }
        else {
          uVar6 = DAT_053e7a7c & 0xffffffff;
          if (-1 < (int)DAT_053e7a7c) goto LAB_02100ec8;
          if ((int)DAT_053e7a7c != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)uVar3;
        if (puVar8 == (uint *)0x0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a7c = CONCAT44(DAT_053e7a7c._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x6ffec71e) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a7c = CONCAT44(DAT_053e7a7c._4_4_,iVar1);
        uVar3 = *param_1;
        if (uVar3 == 0) {
          return 0;
        }
      } while( true );
    case 2:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7a84._4_4_;
          if (-1 < (long)DAT_053e7a84) goto LAB_02100ec8;
          if (DAT_053e7a84._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a84 = CONCAT44(0xfffffffe,(int)DAT_053e7a84);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x5e172d45) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a84 = CONCAT44(iVar1,(int)DAT_053e7a84);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 3:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7ac4 & 0xffffffff;
          if (-1 < (int)DAT_053e7ac4) goto LAB_02100ec8;
          if ((int)DAT_053e7ac4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ac4 = CONCAT44(DAT_053e7ac4._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x48a92c68) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ac4 = CONCAT44(DAT_053e7ac4._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 4:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7af4 & 0xffffffff;
          if (-1 < (int)DAT_053e7af4) goto LAB_02100ec8;
          if ((int)DAT_053e7af4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7af4 = CONCAT44(DAT_053e7af4._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x6f9dd83d) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7af4 = CONCAT44(DAT_053e7af4._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 5:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7ae4._4_4_;
          if (-1 < (long)DAT_053e7ae4) goto LAB_02100ec8;
          if (DAT_053e7ae4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ae4 = CONCAT44(0xfffffffe,(int)DAT_053e7ae4);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x14c6aad3) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ae4 = CONCAT44(iVar1,(int)DAT_053e7ae4);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 6:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7a9c._4_4_;
          if (-1 < (long)DAT_053e7a9c) goto LAB_02100ec8;
          if (DAT_053e7a9c._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a9c = CONCAT44(0xfffffffe,(int)DAT_053e7a9c);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x4cfa2103) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a9c = CONCAT44(iVar1,(int)DAT_053e7a9c);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 7:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7aac & 0xffffffff;
          if (-1 < (int)DAT_053e7aac) goto LAB_02100ec8;
          if ((int)DAT_053e7aac != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7aac = CONCAT44(DAT_053e7aac._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x3cbbdb39) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7aac = CONCAT44(DAT_053e7aac._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 8:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7a94 & 0xffffffff;
          if (-1 < (int)DAT_053e7a94) goto LAB_02100ec8;
          if ((int)DAT_053e7a94 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a94 = CONCAT44(DAT_053e7a94._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x3b44a7ba) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a94 = CONCAT44(DAT_053e7a94._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 9:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7ab4._4_4_;
          if (-1 < (long)DAT_053e7ab4) goto LAB_02100ec8;
          if (DAT_053e7ab4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ab4 = CONCAT44(0xfffffffe,(int)DAT_053e7ab4);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x20624ee7) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ab4 = CONCAT44(iVar1,(int)DAT_053e7ab4);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 10:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7adc & 0xffffffff;
          if (-1 < (int)DAT_053e7adc) goto LAB_02100ec8;
          if ((int)DAT_053e7adc != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7adc = CONCAT44(DAT_053e7adc._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x2a6739f3) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7adc = CONCAT44(DAT_053e7adc._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(*param_2) {
    case 0:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7ad4._4_4_;
          if (-1 < (long)DAT_053e7ad4) goto LAB_02100ec8;
          if (DAT_053e7ad4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ad4 = CONCAT44(0xfffffffe,(int)DAT_053e7ad4);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x6ac1a562) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ad4 = CONCAT44(iVar1,(int)DAT_053e7ad4);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 1:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7a84 & 0xffffffff;
          if (-1 < (int)DAT_053e7a84) goto LAB_02100ec8;
          if ((int)DAT_053e7a84 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a84 = CONCAT44(DAT_053e7a84._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x153e947e) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a84 = CONCAT44(DAT_053e7a84._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 2:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7a8c._4_4_;
          if (-1 < (long)DAT_053e7a8c) goto LAB_02100ec8;
          if (DAT_053e7a8c._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a8c = CONCAT44(0xfffffffe,(int)DAT_053e7a8c);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x24d77e25) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a8c = CONCAT44(iVar1,(int)DAT_053e7a8c);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 3:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7acc & 0xffffffff;
          if (-1 < (int)DAT_053e7acc) goto LAB_02100ec8;
          if ((int)DAT_053e7acc != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7acc = CONCAT44(DAT_053e7acc._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x32697f08) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7acc = CONCAT44(DAT_053e7acc._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 4:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7afc & 0xffffffff;
          if (-1 < (int)DAT_053e7afc) goto LAB_02100ec8;
          if ((int)DAT_053e7afc != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7afc = CONCAT44(DAT_053e7afc._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x155d8b5d) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7afc = CONCAT44(DAT_053e7afc._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 5:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7aec._4_4_;
          if (-1 < (long)DAT_053e7aec) goto LAB_02100ec8;
          if (DAT_053e7aec._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7aec = CONCAT44(0xfffffffe,(int)DAT_053e7aec);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x6e06f9b3) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7aec = CONCAT44(iVar1,(int)DAT_053e7aec);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 6:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7aa4._4_4_;
          if (-1 < (long)DAT_053e7aa4) goto LAB_02100ec8;
          if (DAT_053e7aa4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7aa4 = CONCAT44(0xfffffffe,(int)DAT_053e7aa4);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x363a7263) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7aa4 = CONCAT44(iVar1,(int)DAT_053e7aa4);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 7:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7ab4 & 0xffffffff;
          if (-1 < (int)DAT_053e7ab4) goto LAB_02100ec8;
          if ((int)DAT_053e7ab4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ab4 = CONCAT44(DAT_053e7ab4._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x467b8859) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ab4 = CONCAT44(DAT_053e7ab4._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 8:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7a9c & 0xffffffff;
          if (-1 < (int)DAT_053e7a9c) goto LAB_02100ec8;
          if ((int)DAT_053e7a9c != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7a9c = CONCAT44(DAT_053e7a9c._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x4184f4da) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7a9c = CONCAT44(DAT_053e7a9c._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 9:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_053e7abc._4_4_;
          if (-1 < (long)DAT_053e7abc) goto LAB_02100ec8;
          if (DAT_053e7abc._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7abc = CONCAT44(0xfffffffe,(int)DAT_053e7abc);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x5aa21d87) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7abc = CONCAT44(iVar1,(int)DAT_053e7abc);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    case 10:
      if (*param_1 == 0) {
        return 0;
      }
      cVar7 = DAT_053e7a78;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_053e7a7c = 0xffffffffffffffff;
          DAT_053e7a84 = 0xffffffffffffffff;
          DAT_053e7a78 = '\x01';
          DAT_053e7afc = 0xffffffffffffffff;
          DAT_053e7b04 = 0xffffffff;
          DAT_053e7a8c = 0xffffffffffffffff;
          DAT_053e7a94 = 0xffffffffffffffff;
          DAT_053e7a9c = 0xffffffffffffffff;
          DAT_053e7aa4 = 0xffffffffffffffff;
          DAT_053e7aac = 0xffffffffffffffff;
          DAT_053e7ab4 = 0xffffffffffffffff;
          DAT_053e7abc = 0xffffffffffffffff;
          DAT_053e7ac4 = 0xffffffffffffffff;
          DAT_053e7acc = 0xffffffffffffffff;
          DAT_053e7ad4 = 0xffffffffffffffff;
          DAT_053e7adc = 0xffffffffffffffff;
          DAT_053e7ae4 = 0xffffffffffffffff;
          DAT_053e7aec = 0xffffffffffffffff;
          DAT_053e7af4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_053e7ae4 & 0xffffffff;
          if (-1 < (int)DAT_053e7ae4) goto LAB_02100ec8;
          if ((int)DAT_053e7ae4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        DAT_053e7ae4 = CONCAT44(DAT_053e7ae4._4_4_,0xfffffffe);
        if (uVar6 == 0) {
          return 0;
        }
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x50a76a93) {
          piVar4 = piVar4 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_053e7ae4 = CONCAT44(DAT_053e7ae4._4_4_,iVar1);
        if (*param_1 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


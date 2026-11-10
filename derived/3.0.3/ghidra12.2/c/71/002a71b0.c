
void FUN_002a71b0(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  
  FUN_002a75ec("[Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------",param_1 + 0x302,
               (int)param_1[0x301] / 1000,(int)param_1[0x301] % 1000);
  FUN_002a75ec(
              "[Analysis] ProtocolId(EmulationId), TotalNum, TotalSize, AverageSize, Protocol(port)"
              );
  uVar1 = param_1[0x30a];
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (uVar1 != 0) {
      uVar6 = param_1[0x30b] / uVar1;
    }
  }
  FUN_002a75ec("[Analysis]         0xffffffff(---), %8d,  %8d,    %8d, Packet",uVar1,param_1[0x30b],
               uVar6);
  lVar7 = 0;
  do {
    uVar1 = param_1[lVar7 + 0x30c];
    if (uVar1 != 0) {
      uVar6 = 0;
      if (uVar1 != 0) {
        uVar6 = param_1[lVar7 + 0x32c] / uVar1;
      }
      FUN_002a75ec("[Analysis]         0xffffffff(%3u), %8d,  %8d,    %8d, Packet",(int)lVar7 + 100,
                   uVar1,param_1[lVar7 + 0x32c],uVar6);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  if (0 < (int)param_1[0x300]) {
    lVar7 = 0;
    if ((param_2 & 1) == 0) {
      puVar8 = param_1;
      do {
        uVar1 = puVar8[1];
        if (uVar1 != 0) {
          uVar6 = *puVar8;
          uVar2 = uVar6 >> 0x18;
          if (uVar2 < 0x94) {
            switch(uVar2) {
            case 0x14:
            case 0x18:
            case 0x1c:
            case 0x24:
            case 0x34:
            case 0x44:
            case 0x58:
              break;
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x41:
            case 0x42:
            case 0x43:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
switchD_002a735c_caseD_15:
              if ((uVar6 & 0xff0000) == 0) {
                uVar2 = puVar8[2];
                uVar4 = 0;
                if (uVar1 != 0) {
                  uVar4 = uVar2 / uVar1;
                }
                uVar5 = FUN_002aaa80(uVar6);
                FUN_002a75ec("[Analysis]         0x%08x(---), %8d,  %8d,    %8d, %s(%u)",uVar6,uVar1
                             ,uVar2,uVar4,uVar5,(short)*puVar8);
              }
              else {
                uVar2 = puVar8[2];
                uVar4 = 0;
                if (uVar1 != 0) {
                  uVar4 = uVar2 / uVar1;
                }
                uVar5 = FUN_002aaa80(uVar6);
                FUN_002a75ec("[Analysis]         0x%08x(%3u), %8d,  %8d,    %8d, %s(%u)",uVar6,
                             uVar6 >> 0x10 & 0xff,uVar1,uVar2,uVar4,uVar5,(short)*puVar8);
              }
              break;
            default:
              if (uVar2 != 8) goto switchD_002a735c_caseD_15;
            }
          }
          else if ((uVar2 != 0x94) && (uVar2 != 0xa4)) goto switchD_002a735c_caseD_15;
        }
        lVar7 = lVar7 + 1;
        puVar8 = puVar8 + 6;
      } while (lVar7 < (int)param_1[0x300]);
    }
    else {
      puVar8 = param_1;
      do {
        uVar1 = puVar8[1];
        if (uVar1 != 0) {
          cVar3 = *(char *)((long)puVar8 + 2);
          uVar6 = *puVar8;
          if (cVar3 == '\0') {
            uVar2 = puVar8[2];
            uVar4 = 0;
            if (uVar1 != 0) {
              uVar4 = uVar2 / uVar1;
            }
            uVar5 = FUN_002aaa80(uVar6);
            FUN_002a75ec("[Analysis]         0x%08x(---), %8d,  %8d,    %8d, %s(%u)",uVar6,uVar1,
                         uVar2,uVar4,uVar5,(short)*puVar8);
          }
          else {
            uVar2 = puVar8[2];
            uVar4 = 0;
            if (uVar1 != 0) {
              uVar4 = uVar2 / uVar1;
            }
            uVar5 = FUN_002aaa80(uVar6);
            FUN_002a75ec("[Analysis]         0x%08x(%3u), %8d,  %8d,    %8d, %s(%u)",uVar6,cVar3,
                         uVar1,uVar2,uVar4,uVar5,(short)*puVar8);
          }
        }
        lVar7 = lVar7 + 1;
        puVar8 = puVar8 + 6;
      } while (lVar7 < (int)param_1[0x300]);
    }
  }
  FUN_002a75ec("[Analysis] ---------------------------- END ----------------------------");
  return;
}



undefined8 FUN_03f4cb50(ulong *param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long local_40;
  char *local_38;
  
  *param_1 = param_2;
  lVar2 = param_3 + param_2;
  if (((*(char *)(lVar2 + -4) == 'C') && (*(char *)(lVar2 + -3) == 'a')) &&
     (*(char *)(lVar2 + -2) == 'n')) {
    bVar4 = *(byte *)(lVar2 + -1);
    *(uint *)((long)param_1 + 0x54) = (uint)bVar4;
    if (bVar4 == 0x31) {
      lVar2 = param_2 + param_3;
      uVar3 = *(uint *)(lVar2 + -8);
      uVar10 = -(ulong)uVar3 - 8;
      if (param_2 <= lVar2 + uVar10) {
        param_1[1] = (lVar2 + uVar10) - param_2;
        if (uVar3 != 0) {
          do {
            pbVar1 = (byte *)(lVar2 + uVar10);
            lVar8 = uVar10 + 1;
            if ((*pbVar1 >> 5 & 1) == 0) {
              if (0xfffffffffffffff4 < uVar10) {
                return 0x46;
              }
              uVar7 = (ulong)*(uint3 *)(lVar2 + lVar8);
              lVar8 = uVar10 + 4;
            }
            else {
              uVar7 = 1;
            }
            uVar10 = uVar7 + lVar8;
            if (-8 < (long)uVar10) {
              return 0x46;
            }
            FUN_03f4c2f0(param_1,*pbVar1,lVar2 + lVar8);
          } while (uVar10 != 0xfffffffffffffff8);
        }
        local_38 = (char *)param_1[0xb];
        if (local_38 != (char *)0x0) {
          do {
            pcVar6 = local_38 + 1;
            cVar5 = *local_38;
            local_38 = (char *)0x0;
            local_40 = strtol(pcVar6,&local_38,0);
            FUN_03f4c2f0(param_1,cVar5,&local_40,8);
            cVar5 = *local_38 != ',';
            if (*local_38 == '\0') {
              cVar5 = '\x02';
            }
            else {
              local_38 = local_38 + 1;
            }
          } while (cVar5 == '\0');
          goto LAB_03f4cc30;
        }
        goto LAB_03f4cc38;
      }
    }
    uVar9 = 0x46;
  }
  else {
    local_38 = (char *)param_1[0xb];
    param_1[1] = param_3;
    if (local_38 != (char *)0x0) {
      do {
        pcVar6 = local_38 + 1;
        cVar5 = *local_38;
        local_38 = (char *)0x0;
        local_40 = strtol(pcVar6,&local_38,0);
        FUN_03f4c2f0(param_1,cVar5,&local_40,8);
        cVar5 = *local_38 != ',';
        if (*local_38 == '\0') {
          cVar5 = '\x02';
        }
        else {
          local_38 = local_38 + 1;
        }
      } while (cVar5 == '\0');
LAB_03f4cc30:
      if (cVar5 != '\x02') {
        return 0x43;
      }
    }
LAB_03f4cc38:
    uVar9 = 0;
  }
  return uVar9;
}


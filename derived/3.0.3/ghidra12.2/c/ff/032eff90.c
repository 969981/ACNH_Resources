
undefined8
FUN_032eff90(undefined8 param_1,char *param_2,char param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  void *pvVar5;
  short sVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short local_c0 [56];
  
  if (param_2 == (char *)0x0) {
    return 0x8001;
  }
  psVar9 = local_c0;
  if ((param_6 & 0xff) < (param_5 & 0xff)) {
    uVar4 = 0x801c;
  }
  else {
    psVar1 = (short *)(param_2 + 0x79cc8);
    if (*(ushort *)(param_2 + 0x79da6) < 0x38) {
      if ((param_2[2] == -1) || (param_2[0x70380] != param_2[2])) {
        uVar4 = 0x801b;
      }
      else {
        uVar7 = (ulong)(byte)param_2[0x79e9e];
        if (uVar7 != 0) {
          sVar6 = *(short *)(param_2 + uVar7 * 2 + 0x79cc8);
          if (sVar6 != 0) {
            psVar8 = local_c0;
            psVar10 = (short *)(param_2 + uVar7 * 2 + 0x79cca);
            do {
              psVar9 = psVar8 + 1;
              *psVar8 = sVar6;
              sVar6 = *psVar10;
              psVar8 = psVar9;
              psVar10 = psVar10 + 1;
            } while (sVar6 != 0);
          }
          *psVar9 = 0;
          psVar9 = psVar1;
          if (local_c0[0] != 0) {
            psVar8 = psVar1;
            psVar10 = (short *)((ulong)local_c0 | 2);
            do {
              psVar9 = psVar8 + 1;
              *psVar8 = local_c0[0];
              local_c0[0] = *psVar10;
              psVar8 = psVar9;
              psVar10 = psVar10 + 1;
            } while (local_c0[0] != 0);
          }
          *psVar9 = 0;
        }
        *param_2 = param_3;
        param_2[0x86bcc] = '\0';
        param_2[1] = '\0';
        thunk_FUN_0012d860(param_2 + 8,param_2 + 0x79c80);
        param_2[0x79e9c] = '\0';
        param_2[0x79e9d] = '\0';
        param_2[0x79e9e] = '\0';
        param_2[0x83e00] = '\0';
        param_2[0x83e01] = '\0';
        param_2[0x85b40] = '\0';
        param_2[0x85b41] = '\0';
        pvVar5 = memset(param_2 + 0x87b40,0,0x2d630);
        sVar6 = 0;
        if (*psVar1 != 0) {
          sVar6 = 0;
          psVar9 = (short *)(param_2 + 0x79cca);
          do {
            sVar3 = *psVar9;
            sVar6 = sVar6 + 1;
            psVar9 = psVar9 + 1;
          } while (sVar3 != 0);
        }
        *(short *)(param_2 + 0x79da6) = sVar6;
        param_2[0x79e88] = '\x02';
        param_2[0x79e89] = '\x03';
        cVar2 = *param_2;
        if (cVar2 == '\x02') {
          uVar4 = FUN_032f0510(pvVar5,param_2);
        }
        else if (cVar2 == '\x01') {
          uVar4 = FUN_032f0270(pvVar5,param_2,param_4);
        }
        else {
          if (cVar2 != '\0') {
            return 0x8019;
          }
          uVar4 = FUN_032f0180(pvVar5,param_2,param_5,param_6);
        }
        if (0 < (short)uVar4) {
          param_2[0x86bcc] = '\x01';
        }
      }
    }
    else {
      uVar4 = 0x8025;
    }
  }
  return uVar4;
}


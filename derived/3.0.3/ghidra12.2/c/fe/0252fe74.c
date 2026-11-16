
void FUN_0252fe74(byte *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  
  pbVar3 = &DAT_0548e168;
  piVar1 = (int *)(DAT_054f5738 + 0xde8);
  bVar4 = DAT_0548e168;
  if (7 < DAT_0548e168) {
    bVar4 = 0xff;
  }
  piVar2 = piVar1 + ((long)(char)bVar4 & 0xffffffff);
  if (7 < DAT_0548e168) {
    piVar2 = piVar1;
  }
  if (*piVar2 != param_2) {
    pbVar3 = &DAT_0548e169;
    bVar4 = DAT_0548e169;
    if (7 < DAT_0548e169) {
      bVar4 = 0xff;
    }
    uVar5 = (long)(char)bVar4 & 0xffffffff;
    if (7 < DAT_0548e169) {
      uVar5 = 0;
    }
    if (piVar1[uVar5] != param_2) {
      pbVar3 = &DAT_0548e16a;
      bVar4 = DAT_0548e16a;
      if (7 < DAT_0548e16a) {
        bVar4 = 0xff;
      }
      uVar5 = (long)(char)bVar4 & 0xffffffff;
      if (7 < DAT_0548e16a) {
        uVar5 = 0;
      }
      if (piVar1[uVar5] != param_2) {
        pbVar3 = &DAT_0548e16b;
        bVar4 = DAT_0548e16b;
        if (7 < DAT_0548e16b) {
          bVar4 = 0xff;
        }
        uVar5 = (long)(char)bVar4 & 0xffffffff;
        if (7 < DAT_0548e16b) {
          uVar5 = 0;
        }
        if (piVar1[uVar5] != param_2) {
          pbVar3 = &DAT_0548e16c;
          bVar4 = DAT_0548e16c;
          if (7 < DAT_0548e16c) {
            bVar4 = 0xff;
          }
          uVar5 = (long)(char)bVar4 & 0xffffffff;
          if (7 < DAT_0548e16c) {
            uVar5 = 0;
          }
          if (piVar1[uVar5] != param_2) {
            pbVar3 = &DAT_0548e16d;
            bVar4 = DAT_0548e16d;
            if (7 < DAT_0548e16d) {
              bVar4 = 0xff;
            }
            uVar5 = (long)(char)bVar4 & 0xffffffff;
            if (7 < DAT_0548e16d) {
              uVar5 = 0;
            }
            if (piVar1[uVar5] != param_2) {
              pbVar3 = &DAT_0548e16e;
              bVar4 = DAT_0548e16e;
              if (7 < DAT_0548e16e) {
                bVar4 = 0xff;
              }
              uVar5 = (long)(char)bVar4 & 0xffffffff;
              if (7 < DAT_0548e16e) {
                uVar5 = 0;
              }
              if (piVar1[uVar5] != param_2) {
                pbVar3 = &DAT_0548e16f;
                bVar4 = DAT_0548e16f;
                if (7 < DAT_0548e16f) {
                  bVar4 = 0xff;
                }
                uVar5 = (long)(char)bVar4 & 0xffffffff;
                if (7 < DAT_0548e16f) {
                  uVar5 = 0;
                }
                if (piVar1[uVar5] != param_2) {
                  pbVar3 = &DAT_0548e140;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = *pbVar3;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *param_1 = bVar4;
  return;
}


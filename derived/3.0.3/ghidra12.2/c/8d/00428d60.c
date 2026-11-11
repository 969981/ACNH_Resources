
ulong FUN_00428d60(char *param_1,ulong *param_2,char *param_3,ulong *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if (param_3 != (char *)0x0 || param_1 != (char *)0x0) {
    uVar3 = 1;
    if (param_1 == (char *)0x0) {
      uVar3 = 0xffffffff;
    }
    if (param_1 == (char *)0x0) {
      return (ulong)uVar3;
    }
    if (param_3 == (char *)0x0) {
      return (ulong)uVar3;
    }
    if (param_1 != param_3) {
      uVar3 = strcmp(param_1,param_3);
      if (uVar3 != 0) {
        return (ulong)uVar3;
      }
    }
    if (param_2 != param_4) {
      if ((param_2 == (ulong *)0x0) || (param_4 == (ulong *)0x0)) {
        if ((param_2 != (ulong *)0x0) && ((short)param_2[1] != 0)) {
          return 1;
        }
        if ((param_4 != (ulong *)0x0) && ((short)param_4[1] != 0)) {
          return 0xffffffff;
        }
      }
      else {
        uVar2 = (ushort)param_2[1];
        if (uVar2 < (ushort)param_4[1]) {
          return 0xffffffff;
        }
        if ((ushort)param_4[1] < uVar2) {
          return 1;
        }
        if (uVar2 != 0) {
          uVar7 = 0;
          do {
            puVar6 = param_2 + 2;
            puVar5 = param_4 + 2;
            bVar1 = *(byte *)param_2[3];
            if (bVar1 < *(byte *)param_4[3]) {
              return 0xffffffff;
            }
            if (*(byte *)param_4[3] < bVar1) {
              return 1;
            }
            if (bVar1 == 0x76) {
              if (*puVar6 < *puVar5) {
                return 0xffffffff;
              }
              if (*puVar5 < *puVar6) {
                return 1;
              }
            }
            else if ((bVar1 == 0x74) && (uVar4 = FUN_00428eb0(*puVar6,*puVar5), (int)uVar4 != 0)) {
              return uVar4;
            }
            uVar7 = uVar7 + 1;
            param_4 = puVar5;
            param_2 = puVar6;
            if (uVar2 <= uVar7) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}


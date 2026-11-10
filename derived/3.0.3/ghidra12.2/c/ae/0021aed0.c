
void FUN_0021aed0(long *param_1)

{
  long lVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (param_1[10] == 0) {
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
    sVar3 = (short)param_1[0x10];
  }
  else {
    sVar3 = (short)param_1[0x10];
  }
  if (sVar3 != 0) {
    if ((short)param_1[0xc] == 0) {
      local_44 = 0;
      local_4c = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
      sVar3 = (short)param_1[0x12];
    }
    else {
      sVar3 = (short)param_1[0x12];
    }
    if (sVar3 != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        if (param_1[0x11] == 0) {
          local_4c = 0x800000000000000;
          local_44 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
          lVar1 = param_1[0x11] + lVar6;
          cVar2 = *(char *)(lVar1 + 9);
        }
        else {
          lVar1 = param_1[0x11] + lVar6;
          cVar2 = *(char *)(lVar1 + 9);
        }
        if ((cVar2 != '\0') && (*(char *)(lVar1 + 8) == '\0')) {
          uVar4 = *(undefined2 *)(lVar1 + 6);
          if (param_1[0xb] == 0) {
            local_4c = 0x800000000000000;
            local_44 = 0;
            (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
            uVar5 = FUN_002afc10(param_1[0xb],uVar4);
          }
          else {
            uVar5 = FUN_002afc10(param_1[0xb],uVar4);
          }
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)(param_1[0x11] + lVar6 + 8) = 1;
          }
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0xc;
      } while (uVar7 < *(ushort *)(param_1 + 0x12));
    }
  }
  return;
}


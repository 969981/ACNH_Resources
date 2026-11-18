
uint FUN_034442c0(undefined1 *param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined1 *local_50;
  int local_48;
  undefined1 local_44 [15];
  undefined1 local_35;
  
  uVar3 = 0;
  if (param_1 != (undefined1 *)0x0) {
    local_35 = 0;
    local_48 = 0x10;
    local_50 = local_44;
    if (local_44 == param_1) {
      lVar5 = 0xf;
    }
    else {
      lVar5 = 0;
      do {
        if (param_1[lVar5] == '\0') {
LAB_0344434c:
          iVar4 = (int)lVar5;
joined_r0x03444350:
          if (0xf < iVar4) {
            iVar4 = 0xf;
          }
          goto LAB_03444358;
        }
        if (param_1[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0344434c;
        }
        if (param_1[lVar5 + 2] == '\0') {
          iVar4 = (int)lVar5 + 2;
          goto joined_r0x03444350;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      iVar4 = 0;
LAB_03444358:
      memcpy(local_44,param_1,(long)iVar4);
      local_44[iVar4] = 0;
      lVar5 = (long)local_48 + -1;
      param_1 = local_50;
    }
    puVar1 = PTR_DAT_04bb2ab0;
    local_58 = PTR_DAT_04bb2ab0 + 0x10;
    param_1[lVar5] = 0;
    (**(code **)(puVar1 + 0x28))(&local_58);
    if (local_50 == &DAT_04076b75) {
LAB_034443f0:
      local_68 = PTR_DAT_04bb2020 + 0x10;
      pcStack_60 = "BuiltTownOffice";
      uVar3 = FUN_0273f0a0(&local_68);
    }
    else {
      uVar6 = 0;
      bVar2 = true;
      do {
        if (local_50[uVar6] != (&DAT_04076b75)[uVar6]) break;
        if (local_50[uVar6] == '\0') {
          if (bVar2) goto LAB_034443f0;
          break;
        }
        bVar2 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      uVar3 = 1;
    }
  }
  return uVar3 & 1;
}


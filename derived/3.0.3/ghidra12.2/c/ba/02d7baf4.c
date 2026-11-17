
undefined8 FUN_02d7baf4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if ((*pcVar3 == '/') &&
     (((((((pcVar3[1] == 'L' && (pcVar3[2] == '_')) && (pcVar3[3] == 'D')) &&
         ((pcVar3[4] == 'i' && (pcVar3[5] == 'a')))) &&
        ((pcVar3[6] == 'l' && ((pcVar3[7] == 'o' && (pcVar3[8] == 'g')))))) &&
       (((pcVar3[9] == '_' &&
         (((((pcVar3[10] == '0' && (pcVar3[0xb] == '0')) && (pcVar3[0xc] == '/')) &&
           (((pcVar3[0xd] == 'L' && (pcVar3[0xe] == '_')) &&
            ((pcVar3[0xf] == 'B' && ((pcVar3[0x10] == 't' && (pcVar3[0x11] == 'n')))))))) &&
          (pcVar3[0x12] == 'L')))) && (pcVar3[0x13] == '_')))) ||
      (((((pcVar3[1] == 'L' && (pcVar3[2] == '_')) && (pcVar3[3] == 'D')) &&
        (((pcVar3[4] == 'i' && (pcVar3[5] == 'a')) &&
         ((((pcVar3[6] == 'l' && ((pcVar3[7] == 'o' && (pcVar3[8] == 'g')))) && (pcVar3[9] == '_'))
          && ((((((pcVar3[10] == '0' && (pcVar3[0xb] == '0')) && (pcVar3[0xc] == '/')) &&
                ((pcVar3[0xd] == 'L' && (pcVar3[0xe] == '_')))) && (pcVar3[0xf] == 'B')) &&
              (((pcVar3[0x10] == 't' && (pcVar3[0x11] == 'n')) &&
               ((pcVar3[0x12] == 'R' && (pcVar3[0x13] == '_')))))))))))) ||
       (((((((pcVar3[1] == 'L' && (pcVar3[2] == '_')) && (pcVar3[3] == 'D')) &&
           ((pcVar3[4] == 'i' && (pcVar3[5] == 'a')))) &&
          ((pcVar3[6] == 'l' &&
           ((((pcVar3[7] == 'o' && (pcVar3[8] == 'g')) &&
             ((pcVar3[9] == '_' &&
              (((pcVar3[10] == '0' && (pcVar3[0xb] == '1')) && (pcVar3[0xc] == '/')))))) &&
            ((pcVar3[0xd] == 'L' && (pcVar3[0xe] == '_')))))))) &&
         ((pcVar3[0xf] == 'B' &&
          (((pcVar3[0x10] == 't' && (pcVar3[0x11] == 'n')) &&
           ((pcVar3[0x12] == 'L' && (pcVar3[0x13] == '_')))))))) ||
        ((((((((pcVar3[1] == 'L' && (pcVar3[2] == '_')) && (pcVar3[3] == 'D')) &&
             ((pcVar3[4] == 'i' && (pcVar3[5] == 'a')))) &&
            ((pcVar3[6] == 'l' && ((pcVar3[7] == 'o' && (pcVar3[8] == 'g')))))) &&
           (((pcVar3[9] == '_' &&
             (((pcVar3[10] == '0' && (pcVar3[0xb] == '1')) && (pcVar3[0xc] == '/')))) &&
            (((pcVar3[0xd] == 'L' && (pcVar3[0xe] == '_')) && (pcVar3[0xf] == 'B')))))) &&
          ((pcVar3[0x10] == 't' && (pcVar3[0x11] == 'n')))) &&
         ((pcVar3[0x12] == 'R' && (pcVar3[0x13] == '_')))))))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e38), (uVar2 & 1) != 0)) {
      if (((DAT_05685210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05685210), iVar1 != 0)) {
        DAT_05685200 = PTR_DAT_04bb2020 + 0x10;
        DAT_05685208 = "@T_Text_00";
        __cxa_guard_release(&DAT_05685210);
      }
      local_28 = 0;
      local_38 = &DAT_04ac22c8;
      uStack_30 = 0;
      local_40 = 0;
      uStack_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x2c8,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}


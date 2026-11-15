
void FUN_01f04078(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_18c;
  undefined2 local_187;
  undefined4 local_184;
  undefined4 local_100;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0xaa00) != 3) {
    FUN_020d1018(param_1 + 0x8998);
    if ((*(byte *)(param_1 + 0xaa44) >> 5 & 1) == 0) {
      if ((*(byte *)(param_1 + 0xaa44) >> 2 & 1) != 0) {
        piVar6 = *(int **)PTR_DAT_04bb47d0;
        if ((piVar6 != (int *)0x0) &&
           ((*piVar6 != 0 || piVar6[2] != 0) && *piVar6 == *(int *)(param_1 + 0x89a0))) {
          *(undefined1 *)(piVar6 + 0x2c) = 1;
        }
        uVar5 = DAT_053e0cf8;
        uVar4 = DAT_053e0cf4;
        uVar2 = DAT_053e0cec;
        *(undefined8 *)(param_1 + 0xaa04) = DAT_053e0ce4;
        *(undefined8 *)(param_1 + 0xaa0c) = uVar2;
        *(undefined4 *)(param_1 + 0xaa18) = uVar5;
        uVar5 = DAT_053e0cfc;
        *(undefined8 *)(param_1 + 0xa9f8) = 0;
        *(undefined8 *)(param_1 + 0xa9f0) = 0;
        *(undefined4 *)(param_1 + 0xaa14) = uVar4;
        *(undefined4 *)(param_1 + 0xaa1c) = uVar5;
        uVar4 = DAT_053e0d00;
        *(undefined1 *)(param_1 + 0xaa44) = 0;
        *(undefined4 *)(param_1 + 0xaa00) = 3;
        *(undefined4 *)(param_1 + 0xaa20) = uVar4;
        *(undefined1 *)(param_1 + 0x7878) = 1;
        FUN_01e63f1c(&local_1f0);
        local_100 = 1;
        local_1f0 = CONCAT44(local_1f0._4_4_,10);
        local_184 = 0x708;
        local_187 = 0x101;
        local_18c = 1;
        piVar6 = (int *)(param_1 + 0xca70);
        piVar1 = (int *)(param_1 + 0xe59c);
        if (*(int *)(param_1 + 0xca70) < 1) {
          piVar6 = (int *)(param_1 + 0xaf50);
          piVar1 = (int *)(param_1 + 0xe598);
        }
        FUN_02192440(piVar6,*piVar1 + 1,&local_1f0);
        FUN_01f0369c(param_1);
      }
    }
    else {
      piVar6 = *(int **)PTR_DAT_04bb47d0;
      if ((piVar6 != (int *)0x0) &&
         ((*piVar6 != 0 || piVar6[2] != 0) && *piVar6 == *(int *)(param_1 + 0x89a0))) {
        *(undefined1 *)(piVar6 + 0x2c) = 1;
      }
      *(undefined8 *)(param_1 + 0xa9f0) = 0;
      *(undefined8 *)(param_1 + 0xa9f8) = 0;
      uVar4 = DAT_053e0cf4;
      uVar3 = DAT_053e0cec;
      uVar2 = DAT_053e0ce4;
      *(undefined4 *)(param_1 + 0xaa18) = DAT_053e0cf8;
      *(undefined8 *)(param_1 + 0xaa04) = uVar2;
      *(undefined8 *)(param_1 + 0xaa0c) = uVar3;
      *(undefined4 *)(param_1 + 0xaa1c) = DAT_053e0cfc;
      uVar5 = DAT_053e0d00;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined4 *)(param_1 + 0xaa14) = uVar4;
      *(undefined4 *)(param_1 + 0xaa00) = 3;
      *(undefined4 *)(param_1 + 0xaa20) = uVar5;
      FUN_01f0369c(param_1);
      local_1e8 = 0;
      local_1f0 = 0;
      FUN_01f03900(param_1,&local_1f0);
      FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
      *(undefined8 *)(param_1 + 0xa9fc) = 0;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      local_48 = 0;
      *(undefined8 *)(param_1 + 0xa9f0) = local_1f0;
      *(undefined4 *)(param_1 + 0xa9f8) = local_1e8;
      *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(param_1 + 0xaa34);
      *(undefined4 *)(param_1 + 0xaa20) = *(undefined4 *)(param_1 + 0xaa40);
      *(undefined8 *)(param_1 + 0xaa18) = *(undefined8 *)(param_1 + 0xaa38);
      *(undefined8 *)(param_1 + 0xaa04) = *(undefined8 *)(param_1 + 0xaa24);
      *(undefined8 *)(param_1 + 0xaa0c) = *(undefined8 *)(param_1 + 0xaa2c);
      FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,(long)&local_48 + 4
                   ,&local_48,PTR_DAT_04bc1600,6);
    }
  }
  return;
}


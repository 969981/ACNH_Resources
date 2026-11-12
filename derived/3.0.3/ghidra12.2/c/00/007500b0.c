
undefined8 FUN_007500b0(uint *param_1,uint param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong __size;
  ulong uVar7;
  long lVar8;
  
  lVar8 = DAT_05ae7600;
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar7 = (ulong)param_2;
  __size = (uVar7 + (ulong)param_2 * 0x10) * 0x10 | 8;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(__size);
    puVar3 = PTR_DAT_04bdf0c8;
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        param_3 = (long *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        return 0;
      }
    }
    puVar6 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,param_4);
    puVar3 = PTR_DAT_04bdf0c8;
  }
  if (puVar6 == (ulong *)0x0) {
    PTR_DAT_04bdf0c8 = puVar3;
    s_invalid_name_040e8f53[0] = s_invalid_name_040e8f53[0];
    s_invalid_name_040e8f53[1] = s_invalid_name_040e8f53[1];
    s_invalid_name_040e8f53[2] = s_invalid_name_040e8f53[2];
    s_invalid_name_040e8f53[3] = s_invalid_name_040e8f53[3];
    s_invalid_name_040e8f53[4] = s_invalid_name_040e8f53[4];
    s_invalid_name_040e8f53[5] = s_invalid_name_040e8f53[5];
    s_invalid_name_040e8f53[6] = s_invalid_name_040e8f53[6];
    s_invalid_name_040e8f53[7] = s_invalid_name_040e8f53[7];
    return 0;
  }
  PTR_DAT_04bdf0c8 = puVar3;
  *puVar6 = uVar7;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  lVar8 = 0;
  do {
    *(undefined1 *)((long)puVar6 + lVar8 + 0x38) = 1;
    pcVar2 = (char *)((long)puVar6 + lVar8 + 0x84);
    *(undefined1 *)((long)puVar6 + lVar8 + 8) = 0;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x10) = 0;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x18) = 0;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x20) = 0;
    *(undefined1 *)((long)puVar6 + lVar8 + 0x28) = 0;
    *(undefined **)((long)puVar6 + lVar8 + 0x30) = puVar3 + 0x10;
    *(undefined4 *)((long)puVar6 + lVar8 + 0x3c) = 0;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x60) = 0;
    *(undefined4 *)((long)puVar6 + lVar8 + 0x68) = 0xffffffff;
    *(char **)((long)puVar6 + lVar8 + 0x78) = pcVar2;
    *(undefined4 *)((long)puVar6 + lVar8 + 0x80) = 0x80;
    *(undefined1 *)((long)puVar6 + lVar8 + 0x103) = 0;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x40) = 0;
    *(undefined ***)((long)puVar6 + lVar8 + 0x48) = &PTR_FUN_04ba93e0;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x50) = 0;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x58) = 0;
    if (pcVar2 != "invalid_name") {
      *(undefined1 *)((long)puVar6 + lVar8 + 0x90) = 0;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x8c) = 0x656d616e;
      *(undefined8 *)pcVar2 = s_invalid_name_040e8f53._0_8_;
    }
    *(undefined **)((long)puVar6 + lVar8 + 0x70) = puVar1;
    uVar4 = FUN_006bd550("invalid_name",0);
    lVar5 = lVar8 + 0x110;
    *(undefined4 *)((long)puVar6 + lVar8 + 0x108) = uVar4;
    *(undefined4 *)((long)puVar6 + lVar8 + 0x110) = 0;
    lVar8 = lVar5;
  } while (uVar7 * 0x110 != lVar5);
  *param_1 = param_2;
  *(ulong **)(param_1 + 2) = puVar6 + 1;
  return 1;
}


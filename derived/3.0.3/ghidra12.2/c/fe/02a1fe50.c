
/* WARNING: Removing unreachable block (ram,0x02a20594) */
/* WARNING: Removing unreachable block (ram,0x02a203e4) */
/* WARNING: Removing unreachable block (ram,0x02a20258) */
/* WARNING: Removing unreachable block (ram,0x02a200c8) */
/* WARNING: Removing unreachable block (ram,0x02a1fe94) */
/* WARNING: Removing unreachable block (ram,0x02a20000) */
/* WARNING: Removing unreachable block (ram,0x02a20190) */
/* WARNING: Removing unreachable block (ram,0x02a2031c) */
/* WARNING: Removing unreachable block (ram,0x02a204b0) */
/* WARNING: Removing unreachable block (ram,0x02a20680) */

void FUN_02a1fe50(undefined4 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb2698;
  *param_1 = 0;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(0x32);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02a1fef0;
LAB_02a1ff08:
    puVar6 = *(undefined8 **)(param_1 + 0xc);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02a1ff08;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x32,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02a1ff08;
LAB_02a1fef0:
    param_1[10] = 5;
    *(undefined8 **)(param_1 + 0xc) = puVar6;
  }
  *(undefined2 *)(puVar6 + 1) = 0xeeb5;
  *puVar6 = DAT_0417e570;
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0xc) + (ulong)(1 < (uint)param_1[10]) * 10);
  *puVar6 = DAT_0417e57a;
  *(undefined2 *)(puVar6 + 1) = 0xebf9;
  lVar4 = *(long *)(param_1 + 0xc);
  lVar9 = 0x14;
  if ((uint)param_1[10] < 3) {
    lVar9 = 0;
  }
  *(undefined8 *)(lVar4 + lVar9) = DAT_0417e584;
  *(undefined2 *)((undefined8 *)(lVar4 + lVar9) + 1) = 0xe90d;
  uVar1 = DAT_0417e598;
  lVar4 = *(long *)(param_1 + 0xc);
  lVar9 = 0x1e;
  if ((uint)param_1[10] < 4) {
    lVar9 = 0;
  }
  *(undefined8 *)(lVar4 + lVar9) = DAT_0417e58e;
  *(undefined2 *)((undefined8 *)(lVar4 + lVar9) + 1) = 0xe608;
  lVar4 = *(long *)(param_1 + 0xc);
  lVar9 = 0x28;
  if ((uint)param_1[10] < 5) {
    lVar9 = 0;
  }
  *(undefined2 *)((undefined8 *)(lVar4 + lVar9) + 1) = 0xe2fd;
  *(undefined8 *)(lVar4 + lVar9) = uVar1;
  puVar3 = PTR_DAT_04bc3ee8;
  FUN_03b38690(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x70),0,param_1 + 2,PTR_PTR_04bb2238);
  param_1[0xe] = 1;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(10);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02a2005c;
LAB_02a20078:
    puVar6 = *(undefined8 **)(param_1 + 0x1a);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02a20078;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,10,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02a20078;
LAB_02a2005c:
    *(undefined8 **)(param_1 + 0x1a) = puVar6;
    param_1[0x18] = 1;
  }
  *(undefined2 *)(puVar6 + 1) = 0xc52d;
  *puVar6 = DAT_0417e5a2;
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),1,param_1 + 0x10,PTR_PTR_04bb2238);
  param_1[0x1c] = 2;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(10);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02a20124;
LAB_02a20140:
    puVar6 = *(undefined8 **)(param_1 + 0x28);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02a20140;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,10,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02a20140;
LAB_02a20124:
    *(undefined8 **)(param_1 + 0x28) = puVar6;
    param_1[0x26] = 1;
  }
  *(undefined2 *)(puVar6 + 1) = 0xd80e;
  *puVar6 = DAT_0417e5ac;
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),2,param_1 + 0x1e,PTR_PTR_04bb2238);
  param_1[0x2a] = 3;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(10);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02a201ec;
LAB_02a20208:
    puVar6 = *(undefined8 **)(param_1 + 0x36);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02a20208;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,10,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02a20208;
LAB_02a201ec:
    *(undefined8 **)(param_1 + 0x36) = puVar6;
    param_1[0x34] = 1;
  }
  *(undefined2 *)(puVar6 + 1) = 0xe6bf;
  *puVar6 = DAT_0417e5b6;
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),3,param_1 + 0x2c,PTR_PTR_04bb2238);
  param_1[0x38] = 4;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(10);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02a202b4;
LAB_02a202d0:
    puVar6 = *(undefined8 **)(param_1 + 0x44);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02a202d0;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,10,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02a202d0;
LAB_02a202b4:
    *(undefined8 **)(param_1 + 0x44) = puVar6;
    param_1[0x42] = 1;
  }
  *(undefined2 *)(puVar6 + 1) = 0xd467;
  *puVar6 = DAT_0417e5c0;
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),4,param_1 + 0x3a,PTR_PTR_04bb2238);
  param_1[0x46] = 5;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(10);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02a20378;
LAB_02a20394:
    puVar6 = *(undefined8 **)(param_1 + 0x52);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02a20394;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,10,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02a20394;
LAB_02a20378:
    *(undefined8 **)(param_1 + 0x52) = puVar6;
    param_1[0x50] = 1;
  }
  *(undefined2 *)(puVar6 + 1) = 0xe811;
  *puVar6 = DAT_0417e5ca;
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),5,param_1 + 0x48,PTR_PTR_04bb2238);
  param_1[0x54] = 6;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(10);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02a20440;
LAB_02a2045c:
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02a2045c;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,10,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02a2045c;
LAB_02a20440:
    *(undefined8 **)(param_1 + 0x60) = puVar6;
    param_1[0x5e] = 1;
  }
  *(undefined2 *)(puVar6 + 1) = 0xc95d;
  *puVar6 = DAT_0417e5d4;
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),6,param_1 + 0x56,PTR_PTR_04bb2238);
  param_1[0x62] = 7;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    pvVar7 = malloc(1000);
joined_r0x02a206f4:
    if (pvVar7 != (void *)0x0) {
      param_1[0x6c] = 100;
      *(void **)(param_1 + 0x6e) = pvVar7;
    }
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_02a204f4:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,1000,8);
      goto joined_r0x02a206f4;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_02a204f4;
  }
  uVar8 = 0;
  do {
    lVar9 = (long)(int)uVar8;
    if ((uint)param_1[0x6c] <= uVar8) {
      lVar9 = 0;
    }
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x6e) + lVar9 * 10);
    *puVar6 = *(undefined8 *)(&DAT_0417e5de + (long)(int)uVar8 * 10);
    *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(&DAT_0417e5e6 + (long)(int)uVar8 * 10);
    uVar8 = uVar8 + 1;
  } while (uVar8 != 100);
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),7,param_1 + 100,PTR_PTR_04bb2238);
  param_1[0x70] = 8;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    pvVar7 = malloc(1000);
joined_r0x02a20704:
    if (pvVar7 != (void *)0x0) {
      param_1[0x7a] = 100;
      *(void **)(param_1 + 0x7c) = pvVar7;
    }
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_02a205d8:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,1000,8);
      goto joined_r0x02a20704;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_02a205d8;
  }
  uVar8 = 0;
  do {
    lVar9 = (long)(int)uVar8;
    if ((uint)param_1[0x7a] <= uVar8) {
      lVar9 = 0;
    }
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x7c) + lVar9 * 10);
    *puVar6 = *(undefined8 *)(&DAT_0417e9c6 + (long)(int)uVar8 * 10);
    *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(&DAT_0417e9ce + (long)(int)uVar8 * 10);
    uVar8 = uVar8 + 1;
  } while (uVar8 != 100);
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),8,param_1 + 0x72,PTR_PTR_04bb2238);
  param_1[0x7e] = 9;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(10);
joined_r0x02a20714:
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x8a) = puVar6;
      param_1[0x88] = 1;
      goto LAB_02a2071c;
    }
  }
  else {
    if (param_2 != (long *)0x0) {
LAB_02a206c0:
      puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,10,8);
      goto joined_r0x02a20714;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0xa8);
    }
    param_2 = (long *)*puVar6;
    if (param_2 != (long *)0x0) goto LAB_02a206c0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x8a);
LAB_02a2071c:
  *(undefined2 *)(puVar6 + 1) = 0;
  *puVar6 = 0x3fff;
  FUN_03b38690(*(undefined8 *)(*(long *)puVar3 + 0x70),9,param_1 + 0x80,PTR_PTR_04bb2238);
  return;
}


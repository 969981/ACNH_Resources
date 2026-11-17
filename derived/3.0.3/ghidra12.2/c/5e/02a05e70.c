
undefined8 FUN_02a05e70(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  void *__s;
  undefined4 *puVar8;
  long lVar9;
  size_t sVar10;
  uint uVar11;
  
  (**(code **)(**(long **)(param_2 + 2) + 0x78))();
  puVar4 = PTR_DAT_04bb2698;
  uVar1 = *param_2;
  if (0 < (int)uVar1) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    sVar10 = (ulong)uVar1 * 0x18;
    if (lVar9 == 0) {
      puVar7 = malloc(sVar10);
    }
    else {
      plVar5 = *(long **)(param_2 + 2);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar9 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_02a05f9c;
      }
      puVar7 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar10,8);
    }
    if (puVar7 != (undefined4 *)0x0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = sVar10 - 0x18;
      puVar8 = puVar7;
      if ((SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
        puVar7[2] = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
        *puVar7 = 0xffff;
        puVar8 = puVar7 + 6;
      }
      if (0x17 < sVar10 - 0x18) {
        do {
          *puVar8 = 0xffff;
          puVar8[2] = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          puVar8[6] = 0xffff;
          puVar8[8] = 0;
          *(undefined8 *)(puVar8 + 10) = 0;
          puVar8 = puVar8 + 0xc;
        } while (puVar8 != puVar7 + (ulong)uVar1 * 6);
      }
      *(uint *)(param_1 + 0x10) = uVar1;
      *(undefined4 **)(param_1 + 0x18) = puVar7;
      *(undefined4 *)(param_1 + 8) = 0;
      goto joined_r0x02a05fa8;
    }
  }
LAB_02a05f9c:
  uVar1 = *(uint *)(param_1 + 0x10);
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 0;
joined_r0x02a05fa8:
  if ((uVar1 == 0) || (uVar2 = param_2[1], (int)uVar2 < 1)) {
    return 1;
  }
  uVar11 = 0;
  do {
    if (0 < (int)uVar2) {
      lVar9 = *(long *)puVar4;
      sVar10 = (ulong)uVar2 << 1;
      if (lVar9 == 0) {
        __s = malloc(sVar10);
      }
      else {
        plVar5 = *(long **)(param_2 + 2);
        if (plVar5 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar9 + 8);
          if (lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_02a06070;
        }
        __s = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar10,8);
      }
      if (__s != (void *)0x0) {
        memset(__s,0xff,sVar10);
        puVar7[(long)(int)uVar11 * 6 + 2] = uVar2;
        *(void **)(puVar7 + (long)(int)uVar11 * 6 + 4) = __s;
      }
    }
LAB_02a06070:
    uVar11 = uVar11 + 1;
    if (uVar1 == uVar11) {
      return 1;
    }
    uVar2 = param_2[1];
  } while( true );
}



void FUN_02a0ead0(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *__dest;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  size_t __n;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 == 0) {
    lVar7 = 1;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar7 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar11;
  }
  lVar11 = *(long *)(param_1 + 0x310);
  if ((lVar11 != 0) && (uVar8 = *(uint *)(param_1 + 0x31c), uVar8 != 0)) {
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = 0x90755e55 / uVar8;
    }
    uVar4 = 0x90755e55 - uVar4 * uVar8;
    uVar5 = uVar4;
    do {
      iVar9 = *(int *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3));
      if (iVar9 == -0x6f8aa1ab) {
        uVar8 = *(uint *)(lVar11 + (long)(int)uVar5 * 8 + 4);
        if (((uVar8 < *(uint *)(param_1 + 0x2e0)) &&
            (lVar11 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar8 * 8), lVar11 != 0)) &&
           (__dest = *(long **)(lVar11 + 0xc0), __dest != (long *)0x0)) {
          uVar8 = *(uint *)(lVar11 + 0xb8);
          if (0 < (int)uVar8) {
            uVar10 = 0;
            __n = (long)(int)uVar8 * 8;
            goto LAB_02a0ec54;
          }
        }
        break;
      }
      if (iVar9 == 0) break;
      uVar2 = 0;
      if ((int)(uVar5 + 1) < (int)uVar8) {
        uVar2 = uVar5 + 1;
      }
      uVar5 = uVar2;
    } while (uVar2 != uVar4);
  }
  goto LAB_02a0eca4;
  while( true ) {
    uVar10 = uVar10 + 1;
    __dest = __dest + 1;
    if (uVar8 == uVar10) break;
LAB_02a0ec54:
    __n = __n - 8;
    if (*__dest == param_1 + 0x1bbd8) {
      iVar9 = (int)uVar10;
      if ((-1 < iVar9) && (iVar9 < (int)uVar8)) {
        if (iVar9 + 1 < (int)uVar8) {
          memmove(__dest,__dest + 1,__n);
          uVar8 = *(uint *)(lVar11 + 0xb8);
        }
        *(uint *)(lVar11 + 0xb8) = uVar8 - 1;
      }
      break;
    }
  }
LAB_02a0eca4:
  pbVar1 = (byte *)(param_1 + 0x19eb8);
  (**(code **)(*(long *)(param_1 + 0x1ba80) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1ba10) + 0x28))((long *)(param_1 + 0x1ba10));
  (**(code **)(*(long *)(param_1 + 0x1b9a0) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b930) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b8c0) + 0x28))((long *)(param_1 + 0x1b8c0));
  (**(code **)(*(long *)(param_1 + 0x1b850) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b7e8) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b7b8) + 0x28))((long *)(param_1 + 0x1b7b8));
  (**(code **)(*(long *)(param_1 + 0x1b690) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b620) + 0x28))((long *)(param_1 + 0x1b620));
  (**(code **)(*(long *)(param_1 + 0x1b5b0) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b540) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b4d0) + 0x28))((long *)(param_1 + 0x1b4d0));
  (**(code **)(*(long *)(param_1 + 0x1b460) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b3f8) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b3c8) + 0x28))((long *)(param_1 + 0x1b3c8));
  (**(code **)(*(long *)(param_1 + 0x1b1f8) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b188) + 0x28))((long *)(param_1 + 0x1b188));
  (**(code **)(*(long *)(param_1 + 0x1b118) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b0a8) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1b038) + 0x28))((long *)(param_1 + 0x1b038));
  (**(code **)(*(long *)(param_1 + 0x1afc8) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1af60) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1af30) + 0x28))((long *)(param_1 + 0x1af30));
  (**(code **)(*(long *)(param_1 + 0x1ae08) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1ad98) + 0x28))((long *)(param_1 + 0x1ad98));
  (**(code **)(*(long *)(param_1 + 0x1ad28) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1acb8) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1ac48) + 0x28))((long *)(param_1 + 0x1ac48));
  (**(code **)(*(long *)(param_1 + 0x1abd8) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1ab70) + 0x28))();
  (**(code **)(*(long *)(param_1 + 0x1ab40) + 0x28))((long *)(param_1 + 0x1ab40));
  (**(code **)(*(long *)(param_1 + 0x1bba8) + 0x28))();
  FUN_03f10620(param_1 + 0x288);
  if (lVar7 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar7;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  lVar11 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar11 == 0) {
    lVar7 = 1;
    bVar3 = *pbVar1;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar7 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar11;
    bVar3 = *pbVar1;
  }
  if ((bVar3 >> 1 & 1) != 0) {
    *pbVar1 = bVar3 & 0xf8 | 4;
    if (*(long *)(param_1 + 0x19ed8) == 0) {
      if (*(long *)(param_1 + 0x19ec0) == 0) goto LAB_02a0ef90;
    }
    else {
      FUN_03f45838(param_1 + 0x19ec8);
      if (*(long *)(param_1 + 0x19ec0) == 0) {
        *(undefined4 *)(param_1 + 0x19ebc) = 0xe;
        goto LAB_02a0ef90;
      }
    }
    FUN_03f35214(DAT_05b05848,param_1 + 0x19eb0);
  }
LAB_02a0ef90:
  FUN_03f2a9b0(param_1 + 0x19ee8);
  if (lVar7 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar7;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


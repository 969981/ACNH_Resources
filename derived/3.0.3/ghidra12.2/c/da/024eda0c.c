
void FUN_024eda0c(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 *local_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c04) == 0) {
    FUN_01521b30();
  }
  local_40 = 0;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar6 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb5438 + 0x10;
  local_58 = &DAT_048f9750;
  fVar7 = (float)*(int *)(param_1 + 0x1924) * 0.001;
  fVar8 = (float)*(int *)(param_1 + 0x192a) * 0.001;
  local_50 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iStack_4c = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  puVar3 = (uint *)FUN_014fbd50(&local_48,0,&local_58);
  uVar1 = *puVar3;
  if (uVar1 == 0) {
    if (*(uint *)(param_1 + 0x1c04) < 0x96) {
      return;
    }
  }
  else {
    if (DAT_04c93e08 == 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                     ((ulong)(uVar1 >> 0x11) & 0x7ff8));
    if (((lVar5 == 0) || ((*(uint *)(lVar5 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar5 + 0x230) != uVar1)) {
      lVar5 = 0;
    }
    if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      (**(code **)(*plVar4 + 0x60))();
    }
    if (lVar5 == 0) {
      return;
    }
    if ((*(uint *)(lVar5 + 0x248) >> 4 & 1) == 0) {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x19ae) = 0;
  *(undefined8 *)(param_1 + 0x19b6) = 0;
  *(undefined8 *)(param_1 + 0x19be) = 0;
  *(undefined8 *)(param_1 + 0x19c6) = 0;
  *(undefined8 *)(param_1 + 0x19ce) = 0;
  *(undefined4 *)(param_1 + 0x19d6) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
  *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
  *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar5 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar5,300);
  return;
}


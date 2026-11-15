
void FUN_024ec4c8(long param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  float fVar10;
  float local_3c;
  float fStack_38;
  float local_34;
  
  puVar4 = PTR_DAT_04bb39b0;
  pbVar3 = PTR_DAT_04bb32e0;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      bVar9 = *(byte *)(param_1 + 0x1ee8);
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar1 = (byte *)(lVar6 + 0x158);
      }
      bVar8 = *pbVar1;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar8 != bVar9) {
        fStack_38 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
        local_3c = (float)*(int *)(param_1 + 0x190c) * 0.001;
        local_34 = (float)*(int *)(param_1 + 0x1912) * 0.001;
        lVar7 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0xa8) == 0)) || (*(char *)(lVar7 + 0x11c8) != '\0'))
        {
          fVar10 = -491.0;
        }
        else {
          fVar10 = (float)FUN_0093a950(lVar7 + 0x28,&local_3c,0);
          lVar6 = *(long *)puVar4;
          fVar10 = fVar10 + 9.0;
        }
        puVar2 = &DAT_054e9a58;
        if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(param_1 + 0x4c8);
        }
        *(undefined1 *)((long)puVar2 + 0x2e4) = 1;
        *(float *)(puVar2 + 0x5d) = local_3c;
        *(float *)((long)puVar2 + 0x2ec) = fVar10;
        *(float *)(puVar2 + 0x5e) = local_34;
        *(undefined2 *)((long)puVar2 + 0x2e5) = 0x101;
        if (lVar6 == 0) goto LAB_024ec644;
      }
    }
    if (*(int *)(lVar6 + 0x15c) != 0) {
      bVar9 = *(byte *)(param_1 + 0x1ee8);
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar3 = (byte *)(lVar6 + 0x158);
      }
      bVar8 = *pbVar3;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar8 != bVar9) goto LAB_024ec644;
    }
    if (*(int *)(lVar6 + 0x15c) != 0) {
      local_3c = 1.4013e-45;
      uVar5 = FUN_0254cba0(&local_3c);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
  }
LAB_024ec644:
  if (*(char *)(param_1 + 0x1916) == '\0') {
    *(undefined8 *)(param_1 + 0x19ae) = 0;
    *(undefined8 *)(param_1 + 0x19b6) = 0;
    *(undefined8 *)(param_1 + 0x19be) = 0;
    *(undefined8 *)(param_1 + 0x19c6) = 0;
    *(undefined8 *)(param_1 + 0x19ce) = 0;
    *(undefined4 *)(param_1 + 0x19d6) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
    local_3c = 4.17587e-43;
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
    lVar6 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar6 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar6,0x12a);
  }
  else {
    FUN_024ec7a0(param_1);
  }
  return;
}


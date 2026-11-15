
void FUN_0243da38(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_38[1] = 0xffffffff;
  local_30 = 0;
  local_28 = 0;
  FUN_016e70c0(local_38 + 1);
  local_38[0] = local_28._4_4_;
  uVar2 = (ulong)(local_28._4_4_ >> 0x14) & 0xff0;
  fVar4 = (float)(local_28._4_4_ & 0xffffff) * 5.9604645e-08;
  fVar5 = *(float *)((long)&DAT_04199798 + uVar2) + fVar4 * *(float *)((long)&DAT_0419979c + uVar2);
  fVar4 = *(float *)((long)&DAT_041997a0 + uVar2) + fVar4 * *(float *)((long)&DAT_041997a4 + uVar2);
  fVar6 = fVar5 * 0.0;
  local_30 = CONCAT44(local_30._4_4_ + (fVar6 * 0.0 + 1.0) * 0.0 + fVar4 * 0.0 * 0.0 + fVar6 * -2.55
                      ,(float)local_30 + fVar6 * 0.0 + fVar4 * 0.0 + (fVar5 + 0.0) * -2.55);
  local_28 = CONCAT44(local_28._4_4_,
                      (float)local_28 + (fVar4 * 0.0 * 0.0 - fVar5 * 0.0) + fVar4 * -2.55);
  uVar3 = FUN_016e026c(0,&local_30,0,0);
  local_30 = CONCAT44(uVar3,(float)local_30);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_30,1);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),local_38);
  local_38[1] = 10;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x1880) = 0;
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar1,10);
  return;
}


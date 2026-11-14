
void FUN_01b40b80(long param_1,long param_2,ushort *param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  
  param_2 = param_2 + 0x1c;
  lVar7 = FUN_026917f4(param_1,param_2);
  if (lVar7 != 0) {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    bVar2 = *(byte *)((long)param_3 + 3);
    uVar8 = nn::time::IsValidDate((uint)uVar3,(uint)(byte)uVar4,(uint)bVar2);
    if ((uVar8 & 1) != 0) {
      *(ushort *)(lVar7 + 0x5b0) = uVar3;
      *(byte *)(lVar7 + 0x5b2) = (byte)uVar4;
      *(byte *)(lVar7 + 0x5b3) = bVar2;
    }
  }
  puVar5 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_4);
  if (*(long *)puVar5 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      uVar6 = FUN_026a6580(param_1,param_4,0);
      if (-1 < (int)uVar6) {
        uVar9 = 0x20;
        uVar1 = uVar6 - 0x18;
        if (uVar6 < 0x18) {
          uVar9 = 0x18;
          uVar1 = uVar6;
        }
        if (uVar1 < uVar9) {
          lVar7 = param_1 + 0x10d6c;
          if (uVar6 < 0x18) {
            lVar7 = param_1 + 0x1094c;
          }
          FUN_026b3b80(param_1,uVar6,1);
          FUN_026b7690(param_1,lVar7 + (ulong)uVar1 * 0x2c,param_2,1,1);
          return;
        }
      }
      local_7c = 0xfffe;
      FUN_0277d4ac(&local_7c);
      local_54 = 0;
      local_5c = 0;
      local_64 = 0;
      local_6c = 0;
      local_74 = 0;
      local_80 = 0;
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_027d2090(&local_7c,param_4,&local_98,7,0,0);
      FUN_026b7690(param_1,&local_7c,param_2,1,1);
    }
  }
  return;
}


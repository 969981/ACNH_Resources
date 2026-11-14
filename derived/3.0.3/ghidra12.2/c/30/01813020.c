
undefined * FUN_01813020(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar6 = PTR_DAT_04bb3fa8;
  if ((*(uint *)(param_1 + 0x50) & 0xfffffffe) == 2) {
    lVar7 = param_1[0x7a];
    puVar1 = PTR_DAT_04bb3fa8 + 0x16;
    if (lVar7 == 0) {
      return puVar1;
    }
    (**(code **)(*(long *)(lVar7 + 0x2d8) + 0x28))(lVar7 + 0x2d8);
    bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar4 == 0xffffffffffffffff) {
      return puVar1;
    }
    pbVar2 = (byte *)(*DAT_0537d558 + 0x48);
    uVar8 = (long)(char)bVar4 & 0xffffffff;
    puVar1 = puVar6 + 0x16;
    pbVar3 = pbVar2 + uVar8 * 0x80;
    if (7 < bVar4) {
      pbVar3 = pbVar2;
    }
    if ((*pbVar3 >> 3 & 1) == 0) {
      return puVar1;
    }
    lVar7 = DAT_0537d558[2] + 0x108 + uVar8 * 0xc;
    if (0xb < bVar4) {
      lVar7 = DAT_0537d558[2] + 0x108;
    }
    if (*(char *)(lVar7 + 10) != '\0') {
      return puVar1;
    }
    local_18 = 0;
    if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
       (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')) {
      FUN_0093a950(DAT_04cfae30 + 0x28,param_1[0x60] + 0x278,&local_18);
    }
    local_14 = local_18;
    lVar7 = FUN_009807cc(DAT_04cfab78 + 8,local_18);
    if (((lVar7 != 0) &&
        (pcVar5 = (char *)FUN_009823a0(lVar7,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
        pcVar5 != (char *)0x0)) && (*pcVar5 != '\0')) {
      return puVar6 + 0x16;
    }
  }
  puVar6 = (undefined *)(**(code **)(*param_1 + 0x240))(param_1);
  return puVar6;
}


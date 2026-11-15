
void FUN_01edb4ac(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_18;
  
  lVar7 = param_1[3];
  uVar6 = FUN_02085a50(lVar7,1,0);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)(lVar7 + 0x801) = 1;
    lVar2 = lVar7 + 0x10 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar7 + 0x294)) {
      lVar2 = lVar7 + 0x10;
    }
    *(undefined8 *)(lVar2 + 0xc) = 0;
    *(undefined4 *)(lVar2 + 0x14) = 0;
  }
  lVar7 = param_1[1];
  lVar2 = param_1[2];
  cVar5 = *(char *)((long)param_1 + 0x789e);
  uVar3 = *(uint *)(lVar7 + 0x288);
  *(undefined4 *)(lVar7 + 0x288) = *(undefined4 *)(lVar7 + 0x28c);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  *(undefined4 *)(lVar7 + 0x28c) = *(undefined4 *)(lVar7 + 0x290);
  uVar4 = *(uint *)(lVar7 + 0x294);
  uVar1 = uVar3 ^ uVar4;
  *(uint *)(lVar7 + 0x290) = uVar4;
  *(uint *)(lVar7 + 0x294) = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar1;
  uVar1 = uVar1 >> 0x1e;
  *(undefined1 *)((long)param_1 + 0x789e) = 0;
  uVar3 = uVar1 + 2;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  (**(code **)(*param_1 + 0x308))(param_1,uVar3 * 0x1e);
  local_18 = 0;
  FUN_01e5a930(0x40000000,lVar2,0,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,PTR_DAT_04bc1600,6)
  ;
  return;
}


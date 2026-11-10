
void FUN_0023f234(int *param_1,long param_2,undefined8 param_3,void *param_4,uint param_5,
                 undefined8 param_6,undefined4 param_7,uint param_8,uint param_9,byte param_10)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_640 [16];
  undefined8 local_630;
  undefined1 *local_628;
  undefined4 local_620;
  undefined4 *local_618;
  undefined4 local_610;
  undefined1 auStack_604 [16];
  undefined4 local_5f4 [4];
  undefined1 auStack_5e4 [4];
  undefined1 auStack_5e0 [8];
  int local_5d8;
  ErrorResultVariant aEStack_5d4 [12];
  undefined1 auStack_5c8 [16];
  uint local_5b8;
  undefined4 local_5b4 [341];
  
  uVar10 = *(undefined8 *)
            (*(long *)PTR_DAT_04bcb8b8 + (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 8 +
            0x168);
  *param_1 = 0;
  local_5b4[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_5b4);
  if ((param_10 & 1) == 0) {
    uVar7 = FUN_00232c2c(uVar10);
    FUN_00241f20(&local_630,uVar7,local_5b4,&local_5b8,0x515);
    FUN_00229780(param_1,&local_630);
    iVar9 = *param_1;
  }
  else {
    plVar6 = (long *)FUN_00232c2c(uVar10);
    (**(code **)(*plVar6 + 0x70))(&local_630,plVar6,local_5b4,&local_5b8,0x515);
    FUN_00229780(param_1,&local_630);
    iVar9 = *param_1;
  }
  if (iVar9 == 0) {
    lVar1 = param_2 + 0x5c4;
    FUN_002284c0(lVar1,1);
    FUN_00228480(param_2 + 0x5c5,local_5b8);
    memcpy((void *)(param_2 + 0x5c9),local_5b4,(ulong)local_5b8);
    uVar3 = local_5b8;
    if ((param_9 & 1) == 0) {
      *(long *)(param_2 + 0xdc8) = *(long *)(param_2 + 0xdc8) + 1;
      FUN_002284c0(lVar1 + (ulong)(local_5b8 + 5),2);
      uVar5 = FUN_0023b688(*(undefined8 *)(param_2 + 0x58));
      FUN_002284c0(lVar1 + (ulong)(uVar3 + 6),uVar5 & 1);
      FUN_00228460(lVar1 + (ulong)(uVar3 + 7),*(undefined8 *)(param_2 + 0xdc8));
      uVar5 = local_5b8;
      uVar11 = (ulong)local_5b8;
      uVar8 = FUN_0023b688(*(undefined8 *)(param_2 + 0x58));
      if ((((uVar8 & 1) == 0) ||
          (uVar8 = FUN_0023e298(*(undefined8 *)(param_2 + 0x58)), (uVar8 & 1) == 0)) ||
         ((param_8 & 1) == 0)) {
        FUN_0028d4cc(&local_630);
        uVar4 = FUN_0028d5ac(&local_630);
        lVar2 = param_2 + 0x5c4;
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x1b)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x1a)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x19)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x18)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x17)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x16)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x15)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x14)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x13)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x12)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x11)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0x10)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0xf)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0xe)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0xd)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0xc)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 0xb)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 10)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 9)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 8)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 7)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 6)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 5)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 4)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 3)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 2)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 - 1)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + uVar11) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 + 1)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 + 2)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 + 3)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar5 + 4)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0xf)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x10)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x11)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x12)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x13)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x14)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x15)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x16)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x17)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x18)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x19)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x1a)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x1b)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x1c)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x1d)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x1e)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x1f)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x20)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x21)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x22)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x23)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x24)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x25)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x26)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x27)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x28)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x29)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x2a)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x2b)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x2c)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x2d)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x2e)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x2f)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x30)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x31)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x32)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x33)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x34)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x35)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x36)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x37)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x38)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x39)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x3a)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x3b)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x3c)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x3d)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_630);
        *(undefined1 *)(lVar2 + (ulong)(uVar3 + 0x3e)) = uVar4;
      }
      else {
        if (0xf < param_5) {
          param_5 = 0x10;
        }
        FUN_00222770(&local_5d8,0x10);
        memcpy(auStack_5c8,param_4,(ulong)param_5);
        uVar8 = FUN_00232d58(uVar10);
        if ((uVar8 & 1) == 0) {
          FUN_0023094c(uVar10,&local_5d8,0x20);
          FUN_0023b7c4(*(undefined8 *)(param_2 + 0x58));
          memcpy((void *)(param_2 + (ulong)(uVar5 - 0x1b) + 0x5c4),&local_5d8,0x20);
        }
        memcpy((void *)(param_2 + (ulong)(uVar3 + 0xf) + 0x5c4),&local_5d8,0x10);
        uVar8 = FUN_0021f720(*(long *)(param_2 + 0x58) + 0x70);
        if ((uVar8 & 1) == 0) {
          local_5f4[0] = 0;
          FUN_0021f618(&local_630,*(long *)(param_2 + 0x58) + 0x70,local_5f4);
          FUN_00228480(auStack_5e4,local_5f4[0]);
        }
        else {
          local_630 = 0;
          local_628 = (undefined1 *)0x0;
          FUN_0021f764(local_5f4,*(long *)(param_2 + 0x58) + 0x70,&local_630);
          memcpy(auStack_5e4,&local_630,4);
        }
        FUN_00228460(auStack_5e0,*(undefined8 *)(param_2 + 0xdc8));
        FUN_0023df0c(&local_630,*(undefined8 *)(param_2 + 0x58),&local_5d8,0x20,local_5f4,0x10);
        FUN_00229780(param_1,&local_630);
        FUN_0023e02c(&local_630,*(undefined8 *)(param_2 + 0x58),param_6,param_7,auStack_604,0x10);
        FUN_00229780(param_1,&local_630);
        local_630 = CONCAT44(local_630._4_4_,1);
        local_620 = 0xc;
        local_610 = 0x10;
        local_628 = auStack_5e4;
        local_618 = local_5f4;
        FUN_00221dc8(auStack_640,param_2 + 0x5c4 + (ulong)(uVar3 + 0x2f),auStack_604,0x10,
                     param_2 + 0x5c4 + (ulong)(uVar3 + 0x1f),0x10,&local_630);
      }
      iVar9 = local_5b8 + 0x3f;
    }
    else {
      iVar9 = local_5b8 - 0x1b;
    }
    FUN_0021f508(&local_630,param_3);
    param_2 = param_2 + 0x60;
    FUN_00226ec4(param_2,lVar1,iVar9,&local_630,auStack_604);
    FUN_00229780(param_1,&local_5d8);
    if (*param_1 != 0) {
      local_5d8 = 0x4c0d;
      local_5f4[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5d4,(Result *)local_5f4);
      if (*param_1 != local_5d8) {
        FUN_00237738(*(undefined8 *)(DAT_04c60f48 + 8));
      }
    }
    FUN_00226ec4(&local_5d8,param_2,lVar1,iVar9,&local_630,auStack_604);
    FUN_00229780(param_1,&local_5d8);
    if (*param_1 != 0) {
      local_5d8 = 0x4c0d;
      local_5f4[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5d4,(Result *)local_5f4);
      if (*param_1 != local_5d8) {
        FUN_00237738(*(undefined8 *)(DAT_04c60f48 + 8));
      }
    }
    FUN_00226ec4(&local_5d8,param_2,lVar1,iVar9,&local_630,auStack_604);
    FUN_00229780(param_1,&local_5d8);
    if (*param_1 != 0) {
      local_5d8 = 0x4c0d;
      local_5f4[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5d4,(Result *)local_5f4);
      if (*param_1 != local_5d8) {
        FUN_00237738(*(undefined8 *)(DAT_04c60f48 + 8));
      }
    }
    FUN_0021f584(&local_630);
  }
  return;
}

